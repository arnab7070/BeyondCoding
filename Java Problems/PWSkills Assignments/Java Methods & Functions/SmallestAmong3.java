import java.util.Scanner;

public class SmallestAmong3 {

    static int smallest(int a, int b, int c){
        if(a <= b && a <= c){
            return a;
        }
        else if(b <= a && b <= c){
            return b;
        }
        return c;
    }

    public static void main(String[] args) {

        try (Scanner sc = new Scanner(System.in)) {
            int a,b,c;
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();

            System.out.println(smallest(a, b, c));
        }
    }
}
