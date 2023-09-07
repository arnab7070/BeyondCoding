abstract class Animal {
    Animal() {
        System.out.println("All animals....");
    }
    // We can't implement this method here 
    public abstract void sound(); //abstract method --> Abstract methods do not specify a body
}
class Dog extends Animal {
    Dog() {
        super(); // by this method we can access abstract class constructor
    }
    // Here we can implement the abstract method of Animal class
    public void sound() {
        System.out.println("Barking...");
    }
}
class Lion extends Animal {
    Lion() {
        super(); 
    }
    public void sound() {
        System.out.println("Roaring...");
    }
}
public class Abstraction {
    // Abstraction is a process of hiding the implementation details from the user. Only highlighted service is provided.
    // Advatages of abstraction: (1.) Security (2.) Enhancement
    // Abstraction can be achieved by abstract class or interface

    // Abstract Class: A class which contains the abstract keyword in its declaration is called abstract class
    // It may or may not contain abstract methods or non-abstract methods
    // To use an abstract class we have to inherit it from sub classes.
    public static void main(String[] args) {
        // We cannot create an object of abstract class
        // Animal obj = new Animal(); // error: Animal is abstract; cannot be instantiated
        // Animal obj = new Dog(); // we can create the reference of an abstract class
        Dog dog = new Dog(); 
        dog.sound();
        Lion lion = new Lion();
        lion.sound();
    }
}