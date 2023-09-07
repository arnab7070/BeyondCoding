interface Arnab {
    void add(int a, int b);
}
interface Aniket extends Arnab {
    // By extending Arnab interface we can also access add method into this
    void sub(int a, int b);
}
class Test implements Aniket {
    @Override
    public void add(int a, int b){
        System.out.println("Addition is: "+ (a+b));
    };
    @Override
    public void sub(int a, int b){
        System.out.println("Subtraction is: "+ (a-b));
    };
}
public class ExtendingInterface {
    public static void main(String[] args) {
        Aniket obj = new Test();
        obj.add(10, 20);
        obj.sub(15, 10);
    }
}
