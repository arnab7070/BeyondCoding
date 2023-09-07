interface A {
    void a1();
    void a2();
    // Let suppose I want to add [void a3()] this method after some days which is by default abstract and public So all
    // implementing classes should also implement this extra function to their class otherwise it will throw an error. So it
    // will make a huge problem for the developers. So Java developers have given a solution to this problem. Just use default
    // keyword before the method and it will then have a implementing body.
    default void a3() {
        System.out.println("This method may or may not be overriden in implementing classes.");
    } 
    // or we can simply use static method like default method but it can't be overriden
    public static void a4() {
        System.out.println("This method can not be overriden by sub classes.");
    }
    // We can also write main() method inside an interface as it is also a static method
    // public static void main(String[] args) { }
}
class B implements A {
    @Override
    public void a1() {
        System.out.println("Class B a1()");
    }
    @Override
    public void a2() {
        System.out.println("Class B a2()");
    }
}
class C implements A {
    @Override
    public void a1() {
        System.out.println("Class C a1()");
    }
    @Override
    public void a2() {
        System.out.println("Class C a2()");
    }
    @Override
    public void a3() {
        System.out.println("Now this a3() method is overriden in C class");
    }
}
class D implements A {
    @Override
    public void a1() {
        System.out.println("Class D a1()");
    }
    @Override
    public void a2() {
        System.out.println("Class D a2()");
    }
}
public class Interface2 {
    public static void main(String[] args) {
        B b = new B();
        b.a1(); b.a2();
        b.a3();
        C c = new C();
        c.a1(); c.a2();
        c.a3();
        D d = new D();
        d.a1(); d.a2();
        d.a3();
        A.a4(); // this can be directly called as it is a static method
    }
}
