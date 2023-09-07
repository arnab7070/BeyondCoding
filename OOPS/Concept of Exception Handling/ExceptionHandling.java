public class ExceptionHandling {
    /*
        Exception is nothing but unexpected/unwanted/abnormal situation that occured at runtime is called exception.
        We should find an alternate source through which we can handle the exception
        we can use the following techniques to work with exception handling
        1. try-catch
        2. throw
        3. throws
        4. finally
        `Throwable` class is the super class of java exception hierarchy which contains two sub-classes
        1. Exception            
            RuntimeException
                ArithmaticException
                NullPointerException
                NumberFormatException
                IndexOutOfBoundException
                    ArrayIndexOutOfBoundException
                    StringIndexOutOfBoundException
            IOException
                EOFException
                FileNotFoundException
            SQLException
            InterruptedException
            ClassNotFoundException
        2. Error
            StackOverFlowError
            OutOfMemoryError
            IOError
            LinkageError
    */
    public static void main(String[] args) {

        try {
            int c = 10/0; // Exception in thread "main" java.lang.ArithmeticException: / by zero
            System.out.println(c);
        } catch (Exception e) {
            System.out.println(e);
        }
       
        
    }
}
