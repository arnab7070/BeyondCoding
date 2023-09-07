public class NestedFinallyBlock {
    public static void main(String[] args) {
        try {
            int arr[] = {1,2,3,4,5};
            // System.out.println(arr[2]); // Normal Execution
            System.out.println(arr[6]); // Case 2: Exception in try block
        } catch (Exception e) {
            System.out.println("Error in catch block: "+e);
        }
        finally {
            System.out.println("Inside finally block");
            try {
                // System.out.println(10/5); // Normal Execution
                System.out.println(10/0); // Case 3: Exception in try block inside finally block
            } catch (Exception e) {
                System.out.println("Error in catch block of Finally: "+e);
            }
        }
        System.out.println("Program terminated successfully");
    }
}
/*
Case 1: Normal Execution
3
Inside finally block
2
Program terminated successfully

Case 2: Exception in try block
Error in catch block: java.lang.ArrayIndexOutOfBoundsException: Index 6 out of bounds for length 5
Inside finally block
2
Program terminated successfully

Case 3: Exception in try block inside finally block
Error in catch block: java.lang.ArrayIndexOutOfBoundsException: Index 6 out of bounds for length 5
Inside finally block
Error in catch block of Finally: java.lang.ArithmeticException: / by zero
Program terminated successfully
*/