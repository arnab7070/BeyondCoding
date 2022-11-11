import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int ans = 1;
        for (int i = 2; i <= n; i++) {
            ans *= i;
        }
        System.out.println(ans);
    }
}
