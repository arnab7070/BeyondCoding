class SuperClass {
    SuperClass() {
        System.out.println("Super Class Constructor Called");
    }
    // if we use parameterized constructor then we have to write explicitly the super() along with the parameters
    int a = 10;
}
class SubClass extends SuperClass {
    int a = 20;
    SubClass() {
        // super(); // By default JAVA compiler inserts this line that's why super constructor called first
        System.out.println("Subclass Constructor Called");
    }
    void show(){
        System.out.println("Number is: "+a); // it will access it's own variable
    }
    void display(){
        System.out.println("Number is: " + super.a); // it will access Super Class's variable
    }
}
public class SuperKeyword {
    // Super keyword refers to the object of super class. It is used when we want to call the super class variable, method
    // & constructor through subclass object
    // NOTE:-
    // Whenever the super and sub class variable & method name are same then it can be used
    // To avoid the confusion between super and sub classes variable and methods that have same name we can use super keyword
    public static void main(String[] args) {
        SubClass obj = new SubClass();
        obj.show(); // 20 that means sub class gives priority to it's own variable
        obj.display(); // 10 that means super keyword gives access to parent class variable
    }
}
