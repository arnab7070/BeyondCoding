import java.util.Scanner;

/**
 * takingInput
 */
public class takingInput {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String fname = sc.next();
        String lname = sc.next();
        int roll = sc.nextInt();
        String interest = sc.next();

        System.out.println("Name: " + fname + " " + lname);
        System.out.println("Roll no: " + roll);
        System.out.println("Field of interest: " + interest);
    }
}