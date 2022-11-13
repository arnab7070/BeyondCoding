import java.util.Scanner;

public class SkippingNumber {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a number: ");
            int x = sc.nextInt();
            if(x<0){
                System.out.println("The number is negative hence skipped");
            }
            else{
                System.out.println(x);
            }
        }
    }
}
