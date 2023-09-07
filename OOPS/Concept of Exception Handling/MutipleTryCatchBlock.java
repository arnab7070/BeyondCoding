public class MutipleTryCatchBlock {
    public static void main(String[] args) {
        // Note: Exceptions are independent to each other.
        try {
            int c = 10/2; // no exception
            // int c = 10/0; // exception
            System.out.println(c);
        } catch (ArithmeticException e) {
            System.out.println("Error: "+e);
        }
        try {
            int arr[] = {1,2,3,4};
            System.out.println(arr[5]); //exception
        } catch(ArrayIndexOutOfBoundsException e) {
            System.out.println("Error: "+e);
        }
    }    
}
