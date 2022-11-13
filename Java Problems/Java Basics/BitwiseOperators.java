/**
 * BitwiseOperators
 */
public class BitwiseOperators {
    static void decToBinary(int n)
    {
        // array to store binary number
        int[] binaryNum = new int[1000];
   
        // counter for binary array
        int i = 0;
        while (n > 0) 
        {
            // storing remainder in binary array
            binaryNum[i] = n % 2;
            n = n / 2;
            i++;
        }
   
        // printing binary array in reverse order
        for (int j = i - 1; j >= 0; j--)
            System.out.print(binaryNum[j]);
    }
    
    public static void main(String[] args) {
        System.out.println(9|10); //1001 | 1010 = 1011 (11)
        System.out.println(9&10); //1001 & 1010 = 1000 (8)
        System.out.println(9^10); //1001 ^ 1010 = 0011 (3)
        System.out.println(Integer.toBinaryString(~9).substring(28)); //~ 1001 = 0110 (-10)
        System.out.println(9<<3); //9*2*2*2(3 times multiplied by 2) 
        // that means 1 0 0 1 << 3 means 1 0 0 1 0 -> 1 0 0 1 0 0 -> 1 0 0 1 0 0 0 (72)
        System.out.println(9>>3); //9/2/2/2(3 times divided by 2)
        //that means 1 0 0 1 >> 3 means  1 0 0 -> 1 0 -> 1 (1)
        
    }
}