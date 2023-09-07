public class InstanceBlock {
    // Instance similiar to method which has no name. It can be written within a class only but not inside any method.
    // It always executed before the constructor called
    // We can use variable only, no method will be allowed
    // We write time consuming code inside a instance block like JDBC connectivity
    // We can't access instance block without object creation
    InstanceBlock(){
        System.out.println("Default Constructor");
    }
    // Static block
    static {
        // It will be called first
        System.out.println("Static Block");
    }
    // Instance block
    {
        // It will be called before constructor
        System.out.println("Instance Block");
    }
    public static void main(String[] args) {
        // If we don't make any object still static block will be called
        InstanceBlock obj = new InstanceBlock();
        System.out.println(obj);
    }
}

