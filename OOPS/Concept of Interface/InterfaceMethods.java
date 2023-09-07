interface Client {
    void frontend(); // public + abstract
    void backend(); // public + abstract 
}
// This class will be abstract because it doesn't implemented all abstract methods
abstract class FrontendDeveloper implements Client {
    @Override
    public void frontend() {
        System.out.println("Blue, Stylish NavBar, Footer, Hero Section");
    }
} 
// We can achieve multiple inheritance through interfaces because interface 
// contains only abstract methods which is implemented by subclass
// Class C implements A,B -----> VALID
// Class C extends A,B ------> INVALID

class BackendDeveloper extends FrontendDeveloper {
    @Override
    public void backend() {
        System.out.println("Form Validation, Sign Up page, Javascript, Mongo DB");
    }
}
public class InterfaceMethods {
    public static void main(String[] args) {
        Client customer = new BackendDeveloper();
        customer.frontend();
        customer.backend();
    }
}
