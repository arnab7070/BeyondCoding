class A {
    void show() {
        System.out.println("Class A show() method");
    }
}   

class B extends A {
    @Override
    void show() {
        System.out.println("Class B show() method");
    }
    // So, this is the benifit of annotation of override. If we don't have the function in super-class it will show error
    // @Override
    // void disp() {} // error: method does not override or implement a method from a supertype
}

public class OverrideAnnotation {
    // @Override annotation is a new feature of JAVA introduces from JDK 1.5
    // It gives a 100% clarity to developers & compiler that the method is overriden and if it's not a overriden method
    // then the compiler will generate an error
    public static void main(String[] args) {
        B b = new B();
        b.show();
    }    
}
