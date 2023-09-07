interface A {
    void disp();
}
interface B {
    void show();
}
public class MultipleInheritance implements A,B {
    // By using interface we can achieve multiple inheritance without any error
    @Override 
    public void disp() {
        System.out.println("Interface A disp() method");
    }
    @Override
    public void show(){
        System.out.println("Interface B show() method");
    }
    public static void main(String[] args) {
        MultipleInheritance obj = new MultipleInheritance();
        obj.show();
        obj.disp();
    }
}
