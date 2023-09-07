class A {
    A show(){
        System.out.println("Class A show() method");
        return this;
    }
}
class B extends A {
    @Override
    B show() {
        System.out.println("Class B show() method");
        return this;
    }
}
public class CovarientReturnType {
    // Before this concept we can't change the return type of overriden method. But after this concept we can do this
    public static void main(String[] args) {
        B b = new B();
        b.show();
    }    
}
