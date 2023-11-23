class Parent {
    String name;
    void show() {
        System.out.println("Parent Class");
    }
}
class Child extends Parent {
    int id;
    void show() {
        System.out.println("Child Class");
    }
}
public class UpDownCasting {
    public static void main(String[] args) {
        Parent p = new Child(); // Upcasting Implicitly
        p.name = "Arnab";
        System.out.println(p.name); // priting parent class name
        p.show();
        Child c = (Child)p; // Downcasting Explicitly
        c.id = 23;
        c.show(); 
        System.out.println(c.id); // priting child class id
    }
}
