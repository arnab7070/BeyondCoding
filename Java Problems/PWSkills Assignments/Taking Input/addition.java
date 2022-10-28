import java.util.Scanner;

public class addition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t;
        t = sc.nextInt();
        while (t>0) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            System.out.println(x+y);
            t--;
        }
    }    
}
