public class NestedTryBlock {
    public static void main(String[] args) {
        try {
            System.out.println("Outer Try Block");
            // System.out.println(10/0); // Case 2: Exception in outer try block
            try {
                System.out.println("Inner try Block");
                int arr[] = { 1, 2, 3, 4, 5 };
                System.out.println(arr[0]); // normal execution
                // System.out.println(arr[6]); // Case 1: Exception in inner try block
            } catch (Exception e) {
                System.out.println("Inner catch block error: "+e);
            }
        } catch (Exception e) {
            System.out.println("Outer catch block error: "+e);
        }
        System.out.println("Program Terminated Successfully....");
    }
}
/*
Normal Execution:
Outer Try Block
Inner try Block
1
Program Terminated Successfully...

Case 1: Exception in Inner try block
Outer Try Block
Inner try Block
Inner catch block error: java.lang.ArrayIndexOutOfBoundsException: Index 6 out of bounds for length 5
Program Terminated Successfully....

Case 2: Exception in Outer try block
Outer Try Block
Outer catch block error: java.lang.ArithmeticException: / by zero
Program Terminated Successfully....
*/