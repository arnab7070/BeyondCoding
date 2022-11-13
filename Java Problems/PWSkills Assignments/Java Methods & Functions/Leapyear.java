import java.util.Scanner;

public class Leapyear {
    static Boolean checkLeapyear(int year){

        if(year%4==0){
            if(year%100==0){
                if(year%400==0){
                    return true;
                }
                else{
                    return false;
                }
            }
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int year  = sc.nextInt();
            System.out.println(checkLeapyear(year));
        }
    }    
}
