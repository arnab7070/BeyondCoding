abstract class Programming {
    abstract public void developer();
    // abstract public void rank(); // It will throw an error 
}
class HTML extends Programming{
    //  error: HTML is not abstract and does not override abstract method rank() in Programming
    // So we must complete all the abstract methods in the sub class otherwise subclass will also become abstract class
    @Override 
    public void developer(){
        System.out.println("Tim Berners Lee");
    };
}
class JAVA extends Programming {
    //  error: JAVA is not abstract and does not override abstract method rank() in Programming
    @Override
    public void developer() {
        System.out.println("James Gosling");
    }
}
public class AbstractMethod {
    // A method which contains abstract modifier at the time of declaration is called abstract method
    // It can only be used in abstract class
    // It doesn't contain any body "{}" and always ends with ";"
    // Abstract method must be overriden in sub-classes otherwise it will also become a abstract class
    // Whenever the action is common but implementation is different then we should use abstract method 
    public static void main(String[] args) {
        HTML html = new HTML();
        html.developer();
        JAVA java = new JAVA();
        java.developer();
        // We can also use abstract class's object reference
        Programming p = new HTML();
        p.developer(); // It will also print the HTML class's developer method
    }
}
