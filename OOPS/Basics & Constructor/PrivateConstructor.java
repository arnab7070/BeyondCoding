class Test{
    int a;
    double b;
    String c;
    // private constructor
    private Test(){
        a = 10;
        b = 35.96;
        c = "Arnab";
    }
    void show(){
        System.out.println(a + " " + b + " " + c);
    }
    // Run this program as java Test to show the results for VSCode Users
    public static void main(String[] args) {
        Test t = new Test(); // only this class can create object for private constructor
        t.show();
    }
}
// public class PrivateConstructor {
//     // In JAVA it is possible to write a constructor as a private but according to the rule
//     // we can't access private members outside the class
//     public static void main(String[] args) {
//         // Test t = new Test();  // Error: The constructor Test() is not visible
//         // t.show();
//     }
// }
