
import java.util.Scanner;

public class hollowrectangle {
   public static void hollowrect(int length, int breadth) {
       for (int i = 0; i < breadth; i++) {
         for (int j = 0; j <length ; j++) {
            if(i==0||i==length-1){
                System.err.print("*");
            }
             else{
                if(j==0||j==length-1)
                System.err.print("*");
               else{
                System.err.print(" ");
               }
             }
         }
                      System.err.println("");

       }


   }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.err.println("enter length");
        int length = sc.nextInt();
        System.err.println("enter breadth");
        int breadth = sc.nextInt();
        hollowrect(length, breadth);


    }
    
}
