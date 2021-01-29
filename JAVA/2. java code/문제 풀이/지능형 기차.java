/*
0 32
3 13
28 25
39 0

42
 */

import java.util.*;

public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int[] passengers=new int[4];
        int max=0;
        for(int i=0;i<4;i++){
            int fall=sc.nextInt();//내린 사람
            int new_p=sc.nextInt();//탄 사람
            if(i==0) passengers[i]=new_p;
            else{
                passengers[i]=passengers[i-1];
                passengers[i]-=fall;
                passengers[i]+=new_p;
            }
        }
        for(int i=0;i<4;i++){
            if(max<passengers[i]){
                max=passengers[i];
            }
        }
        System.out.println(max);
   }
}


