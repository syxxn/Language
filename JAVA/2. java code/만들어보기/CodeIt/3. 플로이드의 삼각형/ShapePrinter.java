public class ShapePrinter {
    public void printFloydsPyramid(int height) {
            int count=1,cnt=-1;
            int num=height * (height + 1) / 2;
            while(num>0){
                num/=10;
                cnt++;
            }

            for(int i=1;i<=height;i++) {
                for (int j = 1; j <= i; j++) {
                    if(cnt==0) System.out.printf("%d ",count++);
                    else if (cnt == 1) System.out.printf("%2d ", count++);
                    else if (cnt == 2) System.out.printf("%3d ", count++);
                    else if (cnt == 3) System.out.printf("%4d ", count++);
                    else if(cnt==4) System.out.printf("%5d ",count++);
                }
                System.out.println();
            }
    }
}

