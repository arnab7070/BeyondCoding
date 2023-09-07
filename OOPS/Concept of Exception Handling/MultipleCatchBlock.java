
public class MultipleCatchBlock {
    public static void main(String[] args) {
        try {
            int a = 10, b = 2, c; //normal case
            // int a = 10, b = 0, c; //exception case ---> ArithmeticException
            c = a/b;
            System.out.println(c);
            int arr[] = {1,2,3,4,5};
            System.out.println(arr[0]); // normal case
            // System.out.println(arr[6]); // exception case ---> ArrayIndexOutOfBoundsException
            String str = "Arnab"; 
            System.out.println(str.toUpperCase()); //normal case
            // System.out.println(Integer.parseInt(str)); // exception case ---> NumberFormatException
            // String nullptr = null;
            // System.out.println(nullptr.length()); // nulException case
        } 
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array Index out of Bound");
        }
        catch (ArithmeticException e) {
            System.out.println("Cannot be divide by 0");
        }
        catch (NumberFormatException e) {
            System.out.println("String cannot be converted to integer");
        }
        // If any of the upper catch block matches the super class exception will work.
        catch (Exception e) {
            System.out.println("All types of exception handled");
        }
    }
}
