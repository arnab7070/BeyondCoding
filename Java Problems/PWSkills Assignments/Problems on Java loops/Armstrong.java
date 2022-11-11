import java.util.Scanner;

public class Armstrong {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for(int i = 0; i <= n; i++){
            //Cube of digits & their sum
            int element = i;
            int sum = 0;
            while(element > 0){
                int lastDigit = element%10;
                sum += (lastDigit*lastDigit*lastDigit);
                element /= 10;
            }
            //Condition Check
            if(sum==i){
                System.out.println(i);
            }
        }
        
    }
}
