# 자바와 DB 연결



```java
import java.sql.*;

public class Main {

    public static void main(String args[]) {
        Connection con = null ;

        try {
            Class.forName("com.mysql.jdbc.Driver");
            String url = "DB_URL";
            String id = "DB_USER";
            String password = "DB_PASSWORD";
            con = DriverManager.getConnection(url, id, password); // 자바 프로그램과 DB 서버와의 연결

            Statement stmt = con.createStatement(); // Statement 객체는 자바 프로그램이 DB와 SQL문을 주고 받을 수 있도록 도와주는 객체이다.

            // 1. 테이블 생성
            String createSql = "CREATE TABLE mycar (unq INTEGER UNIQUE ," +
                                "car_name CHAR(50) NOT NULL," +
                                "car_color CHAR(50)," +
                                "car_price INTEGER DEFAULT 0);";
            stmt.execute(createSql);

            // 2. 데이터 입력
            String insert = "INSERT INTO(car_name, car_color, car_price) mysql " +
                            "VALUES('소나타', '흰색', 3000)," +
                                "('그랜저', '검정색', 4500)," +
                                "('아우디', null, 7000);";
            stmt.execute(insert);

            // 3. 데이터 출력
            String select1 = "SELECT * FROM mycar WHERE car_price >= 2000 AND car_price <=5000;";
            String select2 = "SELECT * FROM mycar WHERE car_color IS NULL;";
            stmt.execute(select1);
            stmt.execute(select2);

            // 4. 컬럼 변경
            String alter = "ALTER TABLE mycar MODIFY car_name CHAR(100);";
            stmt.execute(alter);

            // 5. 데이터 변경
            String update = "UPDATE mycar SET car_color='blue' WHERE car_name='sonata';";
            stmt.execute(update);

            // 6. NULL 값 체크 변경
            String ifnull = "SELECT *, IFNULL(car_color,'파란색') FROM mycar;";
            stmt.execute(ifnull);

        } catch(SQLException | ClassNotFoundException e){
            System.out.println("error : " + e);
        }
        finally{
            try{
                if(con != null && !con.isClosed()){
                    con.close();
                }
            }
            catch(SQLException e){
                e.printStackTrace();
            }
        }
    }

} //이 코드가 실행되는 지는 아직 모르겠다. 대충 이런 식으로 하는 거란다.
```



### Connection

`DriverManager.getConnection()`은 실제 자바 프로그램과 데이터베이스를 네트워크상에서 연결을 해주는 메소드이다. 연결에 성공하면 DB와 연결 상태를 Connection 객체로 표현하여 반환한다. 보통 Connection 하나당 트랜잭션 하나를 관리한다.

> connection은 자바프로그램과 DB 사이의 길로 볼 수 있다.



### Statement

Connection으로 길을 만들었으면 DB 쪽으로 SQL문을 보내야하고, 그 결과값을 받아야 하는데 이 역할을 하는 것이 Statement 객체이다.



JDBC 사용하기 - https://joooootopia.tistory.com/16



그냥 위의 코드처럼만 하게되면 `java.lang.ClassNotFoundException: com.mysql.jdbc.Driver` 오류가 뜨게 된다. 이는 JDBC Driver를 찾지 못해서 발생하는 에러이며. 따로 설정이 필요하다.