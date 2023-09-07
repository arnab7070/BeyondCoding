class Test{
    int x,y;
    // parameterized constructor
    Test(int a, int b){
        x=a;y=b;
    }
    void show(){
        System.out.println(x + " " + y);
    }
}
public class Parameterized {
    // we can pass parameter within constructor
    public static void main(String[] args) {
        Test t1 = new Test(5, 6);
        Test t2 = new Test(500, 600);
        t1.show();
        t2.show();
    }
}
