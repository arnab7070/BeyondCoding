class Test {
    // by throws keyword we can bypass the exception to caller function to convince the compiler
    void division(int a, int b) throws ArithmeticException {
        // throw keyword explicitly create a new exception object
        if(b == 0) throw new ArithmeticException(); // exception object
        System.out.println("Division is: "+(a/b));
    }
}
// Always use try-catch instead of throws because it guarrantes 100% exception handle.
public class ThrowAndThrows {
    public static void main(String[] args) {
        Test t = new Test();
        // handling the custom exception
        try {
            t.division(4, 0); // throws an exception
        } catch (Exception e) {
            System.out.println("The value of b is 0");
        }
        // t.division(4, 2); // normal case 
    }
}
