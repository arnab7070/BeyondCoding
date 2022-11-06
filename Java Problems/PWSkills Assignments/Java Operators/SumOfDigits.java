import java.util.Scanner;

public class SumOfDigits {
    public static void main(String[] args) {
        System.out.print("Enter a 3 digit number: ");
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int sum = (number%10);
        number /= 10;
        sum += number%10;
        number/=10;
        sum += number;
        System.out.print("Sum of the digits of this number is = " + sum);
    }
}
