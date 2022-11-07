import java.util.Scanner;

public class GradeCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your percentage: ");
        int percentage = sc.nextInt();

        if(percentage > 90){
            System.out.println("A+");
        }
        else if(percentage > 80){
            System.out.println("A");
        }
        else if(percentage > 70){
            System.out.println("B+");
        }
        else if(percentage > 60){
            System.out.println("B");
        }
        else if(percentage > 50){
            System.out.println("C");
        }
        else if(percentage > 40){
            System.out.println("D");
        }
        else if(percentage > 30){
            System.out.println("E");
        }
        else{
            System.out.println("F");
        }
    }
}
