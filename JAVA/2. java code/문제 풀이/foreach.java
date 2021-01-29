public class Main {
    public static void main(String[] args) {
        int[] intArray=new int[30];
        int data=1001;
        for(int i=0;i<intArray.length;i++,data++){
            intArray[i]=data;
        }
        String[] remainders = {"Zero","One","Two","Three"};

        for(int i : intArray){
            int a=i%4;
            System.out.println(remainders[a]);
        }
        /*for(int i=0;i<intArray.length;i++){
            int a=intArray[i]%4;
            System.out.println(remainders[a]);
        }*/
    }
}
