import java.util.Scanner;

public class middleOfString {
    static String middle(String str){
        if(str.length()%2==1){
            return String.valueOf(str.charAt(str.length()/2));
        }
        return String.valueOf(str.charAt((str.length()/2) - 1))+String.valueOf(str.charAt(str.length()/2));
    }
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            String str = sc.next();

            System.out.println(middle(str));
        }
        
   } 
}
