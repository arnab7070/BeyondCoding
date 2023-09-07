class SuperClass{
    int a,b,c;
    void add(){
        a = 10;
        b = 20;
        c = a + b;
        System.out.println("Sum of two numbers is: "+ c);
    }
    void sub(){
        a = 20;
        b = 10;
        c = a - b;
        System.out.println("Subtraction of two numbers is: "+ c);
    }
}
class Level1 extends SuperClass{
    // Inherited add, sub method
    void multi(){
        a = 20;
        b = 10;
        c = a * b;
        System.out.println("Multiplication of two numbers is: "+ c);
    }
    void div(){
        a = 20;
        b = 10;
        c = a / b;
        System.out.println("Division of two numbers is: "+ c);
    }
}
class Level2 extends Level1{
    // Inherited add, sub, multi, div method
    void rem(){
        a = 20;
        b = 8;
        c = a % b;
        System.out.println("Remainder of two numbers is: "+ c);
    }
}
public class Multilevel_Inheritance {
    // Only one super class and multiple subclass
    public static void main(String[] args) {
        Level2 object = new Level2();
        object.add();
        object.sub();
        object.multi();
        object.div();
        object.rem();
    }
}
