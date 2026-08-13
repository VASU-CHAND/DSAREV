public class invertedroathapyramid {
    public static void pyramid(int n){
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n-1-i; j++) {
                System.err.print(" ");
            }
            for (int j = n-1; j >n-i-1; j--) {
                System.err.print("*");
            }
            System.err.println("");
        }
    }
    public static void main(String[] args) {
        pyramid(8);
    }
}
