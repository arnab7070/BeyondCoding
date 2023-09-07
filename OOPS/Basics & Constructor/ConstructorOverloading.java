class Test{
    int num;
    Test(){
        num = 0;
    }
    Test(int x){
        num=x;
    }
    Test(int x, int y){
        num = (x > y) ? x : y;
    }
    void show(){
        System.out.println(num);
    }
}
public class ConstructorOverloading {
    // When there is more than one constructor for a class then it's called constructor overloading
    public static void main(String[] args) {
        Test t1 = new Test();
        t1.show(); //return default constructor working
        Test t2 = new Test(5);
        t2.show(); //return assigned value in constructor
        Test t3 = new Test(10, 16);
        t3.show(); //return the max value between two given values
    }
}

