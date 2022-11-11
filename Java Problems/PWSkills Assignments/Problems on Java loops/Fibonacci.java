import java.util.Scanner;

/**
 * Fibonacci
 */
public class Fibonacci {

    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int a = 0;
        int b = 1;
        int c = 1;
        for(int i = 0; i <= n; i++){
            if(i<=1){
                System.out.print(1 + " ");
                continue;
            }
            a = b;
            b = c;
            c = a+b;
            System.out.print(c + " ");
        }
    }
}
