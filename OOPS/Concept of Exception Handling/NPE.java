public class NPE {
    // NullPointerException
    public static void main(String[] args) {
        // What is try block?
        // Ans: Whenever we write a code that is error suspecting and risky then put that code in try block
        try{
            // String str = null;
            // Exception in thread "main" java.lang.NullPointerException: Cannot invoke "String.toUpperCase()" because "<local1>" is null
            // System.out.println(str.toUpperCase());
        }
        // What is catch block?
        // Ans: The main purpose of the catch block is to handle the exception which are throwm by try block
        // catch block is not executed when there is no exception in try block
        catch(Exception e){
            System.out.println("Error: "+e);
        }
    }    
}
