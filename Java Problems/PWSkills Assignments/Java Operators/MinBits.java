import java.util.Scanner;

import javax.swing.plaf.synth.SynthStyle;

public class MinBits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int xor = x ^ y;
        int count = 0;
        while(xor != 0){
            xor = xor & (xor-1);
            count++;
        }
        System.out.println(count);
    }
}
