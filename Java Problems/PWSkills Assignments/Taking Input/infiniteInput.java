import java.util.Scanner;

public class infiniteInput {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextLine()){
            String s1 = sc.next();
            String s2 = sc.next();
            System.out.println(s1 + s2);
        }
    }    
}
