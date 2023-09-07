import java.util.Scanner;

public class ThrowKeyword {
    // Throw keyword is used to throw the customized exception object to JVM explicitly
    // Throws keyword is used when we doesn't want to handle the exception and try to send the exception to the JVM
    public static void main(String[] args) throws InterruptedException {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your counter: ");
        int counter = sc.nextInt();
        for (int i = 1; i <= counter; i++) {
            System.out.print(i+" ");
            Thread.sleep(1000);
        }
        sc.close();
    }
}
// Difference between throw and throws

// Throw Keyword:
// 1. throw keyword is used to throw an object explicitly. Example: throw new MyCustomError();
// 2. throw keyword always present inside method body.
// 3. We can throw one exception at a time.
// 4. Throw is followed by an instance.
// Throws Keyword:
// 1. throws keyword is used to declare an exception as well as bypass the caller. Example: void myfunction() throws Exception.
// 2. throws keyword always uses method signature.
// 3. we can handle multiple exceptions using throws keyword.
// 4. throws keyword is followed by class.
