/**
 * BitwiseOperators
 */
public class BitwiseOperators {

    public static void main(String[] args) {
        System.out.println(9|10); //1001 | 1010 = 1011 (11)
        System.out.println(9&10); //1001 & 1010 = 1000 (8)
        System.out.println(9^10); //1001 ^ 1010 = 0011 (3)
        System.out.println(~9); //~ 1001 = 0110 
        System.out.println(9<<3); //9*2*2*2(3 times multiplied by 2) 
        // that means 1 0 0 1 << 3 means 1 0 0 1 0 -> 1 0 0 1 0 0 -> 1 0 0 1 0 0 0 (72)
        System.out.println(9>>3); //9/2/2/2(3 times divided by 2)
        //that means 1 0 0 1 >> 3 means  1 0 0 -> 1 0 -> 1 (1)
    }
}