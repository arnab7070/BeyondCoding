public class NestedCatchBlock {
    public static void main(String[] args) {
        try{
            System.out.println("Try block execution starts...");
            int arr[] = {1,2,3,4,5};
            // System.out.println("Element is: "+arr[2]); // normal execution
            System.out.println("Element is: "+arr[6]); // Case 2: try block exception execution
        }
        catch (Exception e1) {
            System.out.println("Outer catch block execution starts...");
            try {
                // System.out.println("Division is: "+(10/2)); // normal execution
                System.out.println("Division is: "+(10/0)); // Case 3: Inner try block exception execution
            } 
            catch (Exception e2) {
                System.out.println("Inner catch block execution starts...");
            }
        }
        System.out.println("Program Terminated Successfully...");
    }
}

/*
Case 1: Normal Execution 
Try block execution starts...
Element is: 3
Program Terminated Successfully...

Case 2: Try block exception
Try block execution starts...
Outer catch block execution starts...
Division is: 5
Program Terminated Successfully...

Case 3: Inner try block exception along with outer
Try block execution starts...
Outer catch block execution starts...
Inner catch block execution starts...
Program Terminated Successfully...
*/