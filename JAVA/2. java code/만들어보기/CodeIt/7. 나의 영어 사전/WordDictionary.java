import java.util.HashMap;

public class WordDictionary {

    HashMap<String, String> words = new HashMap<>();
    /*
    HashMap은 'value(원소)'와 그 원소를 가리키는 'key' 값을 같이 저장한다.
    ArrayList는 순서만 저장하지만 HashMap은 key, value가 쌍을 이룬다.
     */

    void addWord(String e, String k){
        words.put(e,k);
    }

    String find(String e){
        String k=null;

        for (String key : words.keySet()) { //keySet()은 모든 키를 담고 있는 set을 리턴해준다.
            if(key.equalsIgnoreCase(e)) //대소문자 구별없이 같은 알파벳인지를 비교해준다.
                k = words.get(key);
        }

        return k;
    }

}
