class Test {
    private int value; // data hiding
    public void setValue(int x) { // data abstraction
        value = x;
    }
    public int getValue() {
        return value;
    }
}

public class Encapsulation {
    // Encapsulation is a mechanism through which we can wrap the data members and methods of class in a single unit
    // Declare the class variables as private & class methods as public so that we can access private variables through this
    // Class is a best example of encapsulation
    public static void main(String[] args) {
        Test t = new Test();
        t.setValue(18);
        System.out.println(t.getValue());
        // System.out.println(t.value); // error: value has private access in Test
    }
}
