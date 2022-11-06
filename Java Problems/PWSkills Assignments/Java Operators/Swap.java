import java.util.Scanner;

public class Swap {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int x = sc.nextInt();
        System.out.print("Enter second number: ");
        int y = sc.nextInt();
        System.out.println("Swapping numbers......");
        x = x+y;
        y = x-y;
        x = x-y;
        System.out.println("Now first number is "+x+" & second number is "+y);

    }
}
