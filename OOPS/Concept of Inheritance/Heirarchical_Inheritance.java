class SuperClass {
    void input() {
        System.out.print("Enter your name: ");
    }
}
class SubClass1 extends SuperClass {
    void show(String name) {
        System.out.println(name);
    }
}
class SubClass2 extends SuperClass {
    void display(String name){
        System.out.println(name);
    }
}
public class Heirarchical_Inheritance {
    // It contains only one super class and multiple sub class and all sub class directly extends super class 
    public static void main(String[] args) {
        SubClass2 obj1 = new SubClass2();
        obj1.input();obj1.display("SubClass 2");
        SubClass1 obj2 = new SubClass1();
        obj2.input();obj2.show("SubClass 1");
    }
}