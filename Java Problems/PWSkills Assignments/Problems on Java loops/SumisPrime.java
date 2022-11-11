import java.util.Scanner;

public class SumisPrime {
    // Function to check whether a number
    // is prime or not
    static boolean isPrime(int n)
    {
        if (n <= 1)
            return false;
     
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0)
                return false;
        }
     
        return true;
    }
     
    // Function to check if a number
    // can be expressed as sum of
    // two Prime Numbers
    static boolean isPossible(int N)
    {
        for(int i = 0; i < N/2; i++){
            if (isPrime(i) && isPrime(N - i))
                return true;
        }
        return false;
        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(isPossible(n)){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}
