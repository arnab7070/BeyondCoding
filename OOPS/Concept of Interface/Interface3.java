interface A {
    private void add(int x, int y) {
        System.out.println("Addition: "+ (x+y));
    }
    default void getAddMethod(int x, int y) {
        add(x,y);
    }
}
class B implements A {
    // to implement a private method we need to define a getter method in the interface
    // now the getAddMethod() function has come into the class
    public void sub(int x, int y) {
        System.out.println("Subtraction: "+ (x-y));
    }
}
public class Interface3 {
    // From JDK 1.9 onwards interface can have private methods also & we can declare this private method as static or non-static
    public static void main(String[] args) {
        B b = new B();
        b.getAddMethod(10, 20);
        b.sub(200, 70);
    }
}
