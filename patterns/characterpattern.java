
import java.util.Scanner;

public class characterpattern {
    public static void star(int n){
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <=i; j++) {
                System.err.print((char)('A' +j+ i));
            }
            System.err.println("");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.err.println("enter the number");
        int num = sc.nextInt();
        star(num);
    }
}
