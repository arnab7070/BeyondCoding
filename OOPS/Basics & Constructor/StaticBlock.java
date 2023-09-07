class Test{
    static void staticBlock() {
        System.out.println("Static Block Called");
    }
}
public class StaticBlock {
    // static block is such kind of block in Java which gets executed at the time of loading the .class file in JVM memory
    // Non static variable cannot be reference inside static block
    public static void main(String[] args) {
        // static block always executes first
        Test.staticBlock(); // without creating an object we can directly call staticBlock codes
    }
}
