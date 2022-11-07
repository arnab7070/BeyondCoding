public class Loops {
    public static void main(String[] args) {
        int x = 10;
        //For Loop
        for (int i = 0; i < x; i++) {
            System.out.print(i + " ");
        }
        //While Loop
        x = 0;
        System.out.println();
        while(x<10){
            System.out.print(x + " ");
            x++;
        }
        //Do-While Loop
        x = 0;
        System.out.println();
        do {
            System.out.print(x + " ");
            x++;
        } while (x<10);
        //Break & Continue
        System.out.println();
        for (int i = 0; i < 10; i++) {
            
            if(i%2==1){
                System.out.println(i + ": Inside Continue Statement");
                continue;
            }
            else if(i==8){
                System.out.println("Break Statement executed - > " + i);
                break;
            }
            else{
                System.out.println(i);
            }
        }
    }
}
