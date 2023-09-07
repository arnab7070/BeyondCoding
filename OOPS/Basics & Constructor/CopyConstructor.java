class Test{
    int a; String b;
    Test(){
        a = 100;
        b = "Arnab";
    }
    Test(Test ref){
        a = ref.a;
        b = ref.b; 
    }
    void show(Test ref){
        System.out.println(ref+" "+a+" "+b);
    }
}
public class CopyConstructor {
    // Whenever we pass object reference to the constructor then it is called copy constructor.
    // Copy constructor can copy one class's all objects to another class.
    public static void main(String[] args) {
        Test mainObj = new Test();
        mainObj.show(mainObj);
        Test copyObj = new Test(mainObj);
        copyObj.show(copyObj);
    }
}
