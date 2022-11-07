import java.util.Scanner;

import javax.swing.plaf.basic.BasicBorders.MarginBorder;

public class SquareCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length: ");
        int length = sc.nextInt();
        System.out.print("Enter breadth: ");
        int breadth = sc.nextInt();

        if(length==breadth){
            System.out.println("Square");
        }
        else{
            System.out.println("Rectangle");
        }
    }
}
