// Compile Time Polymorphism
class Test {
    // We are doing here method overloading
    void add() {
        int a=10,b=20;
        int c = a+b;
        System.out.println(c);
    }
    // return type doesn't have any effect in polymorphism
    int add(int a, int b) {
        int c = a+b;
        return c;
    }
    void add(int a, double b){
        double c = a+b;
        System.out.println(c);
    }
}
// Run Time Polymorphism
class Shape { // super class
    void draw() {
        System.out.println("Can't say shape type");
    }
}
class Sqaure extends Shape { // sub class
    // JVM will run this overridden method not the super class method
    @Override
    void draw() { // overridden method
        System.out.println("Square Shape");
    }
}
class Sqaure2 extends Shape {
    // Here it is not overriding so JVM will search draw method in super class and execute that during runtime
    void draw2() {
        System.out.println("Sqaure 2 object");
    }
}
public class Polymorphism {
    // Polymorphism is a greek word whose meaning is "Same object having different behaviour"
    // Types of polymorphism (Compile Time Polymorphism / Run Time Polymorphism)
    
    // Compile Time Polymorphism:
    // A polymorphism which is exist at the time of compiling is called Compile Time or Early Binding or Static Polymorphism
    // We can achieve compile time polymorphism by method overloading (Same Name Method (different parameters))
    
    // Run Time Polymorphism:
    // A polymorphism which exists at the time of execution of program is called runtime or dynamic or late binding polymorphism.
    // We can achieve run time polymorphism by method overriding (must use inheritance)
    // whenever super and sub class's method name and parameter is same then it's called method overriding
    public static void main(String[] args) {
        Test t = new Test();
        // Here compiler decides automatically which method should be called
        t.add();
        int result = t.add(10, 30);
        System.out.println(result);
        t.add(15, 45.38);

        Shape s = new Sqaure();
        s.draw();

        Shape s2 = new Sqaure2();
        s2.draw();
    }
}
