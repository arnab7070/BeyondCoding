import java.util.Scanner;

public class AverageOf3 {
    static int average (int a, int b, int c){
        return (a+b+c)/3;
    }
    public static void main(String[] args) {
        int a,b,c;
        try (Scanner sc = new Scanner(System.in)) {
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
        }
        System.out.println(average(a, b, c));
    }   
}
