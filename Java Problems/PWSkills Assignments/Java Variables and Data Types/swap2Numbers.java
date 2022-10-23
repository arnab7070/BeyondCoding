public class swap2Numbers {
    public static void main(String[] args) {
        int x = 2, y = 3;
        System.out.print("Previously ");
        System.out.println("x: "+x+", y: "+y);
        int temp;
        temp = x;
        x = y;
        y =temp;
        System.out.print("After swapping ");
        System.out.println("x: "+x+", y: "+y);
    }
}
