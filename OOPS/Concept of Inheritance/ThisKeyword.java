public class ThisKeyword {
    // This keyword refers to the same current object's reference
    // It is also used when we want to call the default constructor of its own class
    // Default constructor
    ThisKeyword() {
        System.out.println("Default Constructor Called");
    }
    int variable = 10; // instance variable
    // To create difference betweeen instance variable and local variable of same
    // name, we use This Keyword
    ThisKeyword(int variable /* Local Variable */) {
        this(); // this() method will call the default constructor of same class
        // variable = variable; // this will create confusion after compilation it will
        // show the default value
        this.variable = variable; // we use this keyword to point out to the instance varibale
        // instance variable = local variable
    }
    // It is also used to call parameterized constructor of its own class
    ThisKeyword(String name){
        this(105); // parameterized constructor called
        System.out.println("Parameterized Constructor Invocation by this()");
    }
    void show() {
        System.out.println("The number is: " + variable);
    }
    public static void main(String[] args) {
        ThisKeyword object = new ThisKeyword(15);
        object.show();
        ThisKeyword object2 = new ThisKeyword("Parameterized");
        object2.show();
    }
}