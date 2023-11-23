class SuperClass {
    public void method1() {
        System.out.println("Public Super Method1");
    }
    public void method2() {
        System.out.println("Public Super Method2");
    }
}

class SubClass extends SuperClass {
    @Override
    protected void method1() {
        
    }
}

public class SuperSub {
    public static void main(String[] args) {
        SubClass sc = new SubClass();
        
    }
}
