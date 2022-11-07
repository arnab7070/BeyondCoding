import java.util.Scanner;

/**
 * Condition
 */
public class Condition {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        // if(x%2==0){
        //     System.out.println("The number is even");
        //     return;
        // }
        // System.out.println("The number is odd");

        //Ternary Operation
        // String ans  = x%2==0 ? "Even" : "Odd";
        // System.out.println(ans);

        //Switch Case
        // switch (x%2) {
        //     case 0:
        //         System.out.println("Even");
        //         break;
        //     case 1: 
        //         System.out.println("Odd");
        //         break;
        //     default:
        //         System.out.println("NaN");
        //         break;
        // }

        //If-Else Operator
        if(x%2==0){
            System.out.println("Even");
        }
        else if(x%2==1){
            System.out.println("Odd");
        }
        else{
            System.out.println("NaN");
        }
    }
}