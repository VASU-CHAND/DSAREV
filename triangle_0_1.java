import java.util.Scanner;

public class triangle_0_1 {
    public static void triangle(int n){
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <=i; j++) {
                if((i+j)%2==0){
                    System.err.print(1);
                }
                else{
                    System.err.print("0");
                }
            }
            System.err.println("");
        }
    }
    public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
        System.err.println("enter length");
        int length = sc.nextInt();
        
        triangle(length);


        
    }
}
