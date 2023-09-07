public class FinallyBlock {
    // Finally block is a realtime block and the main purpose of it is to handle the
    // resources.
    public static void main(String[] args) {
        try {
            System.out.println("Try Block Execution Started...");
            int a=20,b=2,c; // no exception
            // int a = 20, b = 0, c; // execption
            c = a / b;
            System.out.println(c);
            System.out.println("Try Block Executed Successfully.");
        }
        catch (Exception e) {
        System.out.println("Error: "+e);
        }

        // Case 3: Abnormal Termination
        // catch (NullPointerException e) {
        // System.out.println("Error: "+e);
        // }

        // Case 4: Abnormal Termination
        // catch (ArithmeticException e) {
        //     int a = 20, b = 0, c; // execption inside catch block
        //     c = a / b;
        //     System.out.println(c);
        //     System.out.println("Error: " + e);
        // }
        finally {
        System.out.println("Finally block executed!!!");
        }
        // Case 5: Abnormal Termination
        // finally {
        //     int a = 20, b = 0, c; // execption inside finally block also
        //     c = a / b;
        //     System.out.println(c);
        //     System.out.println("Finally block executed!!!");
        // }
        System.out.println("All blocks executed. Program terminated successfully");
    }
}

// Case 1: if there is no exeption in try block
/*
 * Output:
 * Try Block Execution Started...
 * 10
 * Try Block Executed Successfully.
 * Finally block executed!!!
 * All blocks executed. Program terminated successfully
 */

// Case 2: if there is exeption in try block
/*
 * Output:
 * Try Block Execution Started...
 * Error: java.lang.ArithmeticException: / by zero
 * Finally block executed!!!
 * All blocks executed. Program terminated successfully
 */

// Case 3: if there is no matching exection in catch block
/*
 * Output:
 * Try Block Execution Started...
 * Finally block executed!!!
 * Exception in thread "main" java.lang.ArithmeticException: / by zero
 * at FinallyBlock.main(FinallyBlock.java:8)
 */

// Case 4: if there is an exception inside catch block also (try+catch exception)
/*
 * Output:
 * Try Block Execution Started...
 * Finally block executed!!!
 * Exception in thread "main" java.lang.ArithmeticException: / by zero
 * at FinallyBlock.main(FinallyBlock.java:24)
 */

// Case 5: if there is an exception inside the final block also (try+catch+finally exception)
/*
 * Output:
 * Try Block Execution Started...
 * Exception in thread "main" java.lang.ArithmeticException: / by zero
 * at FinallyBlock.main(FinallyBlock.java:30)
 */