import java.util.Scanner;

interface Client {
    // Here method is by default public and abstract. Here variables will be static and final that must be initialised
    int date = 3;
    void input(); 
    void output();
}
// By using command javap Client we can get a clear concept about the class
/*
    interface Client {
    public static final int date;
    public abstract void input();
    public abstract void output();
    }
 */
class Arnab implements Client {
    String name; double salary;
    @Override
    public void input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter username: ");
        name = sc.nextLine();
        System.out.print("Enter salary: ");
        salary = sc.nextDouble();
        sc.close();
    }
    @Override
    public void output() {
        System.out.println("Username: "+name+"\nSalary: "+salary);
    }

}
public class Interface {
    // Interface is just like a class which contains only abstract method. by using implements keyword we can achieve this.
    // Interface methods are by default public & abstract.
    // Interface variables are by default public static & final.
    // Interface method must be overriden inside the implementing class.
    // Interface is nothing but deals with client and developer.
    // Before JDK 1.8, interface can only have abstract methods and all the abstract methods of interface must be 
    // overriden in implementing class as well as methods are public and abstract by default.
    // From JDK 1.8 onwards interface can have default & static methods
    public static void main(String[] args) {
        Client object = new Arnab();
        object.input();
        object.output();
    }    
} 