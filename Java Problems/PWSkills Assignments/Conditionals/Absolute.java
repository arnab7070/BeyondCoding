import java.util.Scanner;

public class Absolute {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a number: ");
            int number = sc.nextInt();
            if(number<0){
                number *= -1;
            }
            System.out.println(number);
        }
    }
}
