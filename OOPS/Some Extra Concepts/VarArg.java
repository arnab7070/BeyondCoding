class Test {
    void sum(int ...args){ //var-args method
        int ans = 0;
        for (int i : args) { //for-each loop
            ans += i;
        }
        System.out.println(ans);
    }
}
public class VarArg {
    // var-arg known as variable number of argument methods and it is newly introduced in JDK 1.5 version
    // By using this concept we can pass any number of parameters including 0 parameter to calling method
    public static void main(String[] args) {
        Test t = new Test();
        t.sum();
        t.sum(10,20,30);
        t.sum(10,20,30,40);
        t.sum(10);
        t.sum(10,20);
    }    
}
