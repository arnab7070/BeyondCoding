public class ExceptionPropagation {
    // Exception Propagation: it is a technique through which we can handle the exception in the called function.
    // Exception will bypass to JVM
    public static void main(String[] args) throws ArithmeticException {
        m1();
    }
    // Exception will bypass to main()
    public static void m1() throws ArithmeticException {
        m2();
    }
    // Exception will bypass to m1()
    public static void m2() throws ArithmeticException {
        System.out.println(1/0); // ArithmeticException
    }
}
