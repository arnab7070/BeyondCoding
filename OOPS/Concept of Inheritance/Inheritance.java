class Student { // super class
    int roll, marks;
    String name;
    void method1() {
        System.out.println("Method 1 from super class");
    }
}

class StudentObj extends Student { // sub class
    StudentObj(String name, int roll, int marks) {
        this.name = name;
        this.roll = roll;
        this.marks = marks;
    }
    void display() {
        System.out.println("Roll: "+roll+", Name: "+name+", Marks"+marks);
    }
    void method1(){
        System.out.println("Method 1 form sub class");
    }
}

public class Inheritance {
    // When we construct a new class from existing class in such a way that the new
    // class access all the features
    // & properties of existing class is called as Inheritance
    // In java we use extends keyword to perform inheritance
    // It provides code reusability
    // We can't access private members of class through inheritance
    // A subclass contains all the features of superclass so we should create the
    // object of subclass
    // Method overriding only possible through inheritance
    // Types of Inheritance (Single / Multi-level / Heirarchical)
    // JAVA does not support Multiple Inheritance through class but it can do it
    // through interfaces

    public static void main(String[] args) {
        // Simple Inheritance contains only one super class & one sub class
        StudentObj student1 = new StudentObj("Arnab", 81, 95);
        // student1.method1(); // It is using super class's method...
        student1.display();
        // student1.method1(); // Method 1 form sub class
    }
}
