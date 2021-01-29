import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt(); //게임에 참여한 사람 수
        int[] dice=new int[3];
        int[] money=new int[1000];
        int max=0;

        for(int i=0;i<n;i++){
            dice[0]=sc.nextInt();
            dice[1]=sc.nextInt();
            dice[2]=sc.nextInt();

            if (dice[0] == dice[1]) {
                if (dice[1] == dice[2]) money[i] = 10000 + dice[0] * 1000;
                else money[i] = 1000 + dice[0] * 100;
            }
            else{
                if(dice[1]==dice[2]) money[i]=1000+dice[1]*100;
                else if(dice[0]==dice[2]) money[i]=1000+dice[0]*100;
                else{
                    for(int j=0;j<3;j++){
                        if(max<dice[j]) max=dice[j];
                    }
                    money[i]=max*100;
                }
            }
            max=0;
        }
        for(int i=0;i<n;i++){
            if(max<money[i])max=money[i];
        }
        System.out.println(max);

    }

}

