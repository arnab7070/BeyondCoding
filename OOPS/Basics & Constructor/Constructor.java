/**
 * Constructor
 */
class Test {
    int a;
    String b;

    // If we don't write any constructor then default constructor will work

    // we are now going to build a constructor so now it will initialize the instance variable
    Test() {
        a = 100;
        b = "Arnab";
    }
    void show() {
        System.out.println(a + " " + b);
    }

}
public class Constructor {

    public static void main(String[] args) {
        Test t = new Test();
        t.show();
    }
}