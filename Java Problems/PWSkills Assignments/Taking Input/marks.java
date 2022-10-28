import java.util.Scanner;

public class marks {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m1,m2,m3;
        m1 = sc.nextInt();
        m2 = sc.nextInt();
        m3 = sc.nextInt();
        System.out.println("Total: " + (m1+m2+m3));
        System.out.println("Percentage: " + ((m1+m2+m3)/3));
    }    
}
