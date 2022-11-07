import java.util.Scanner;

public class CostSell {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter cost price: ");
        int cost = sc.nextInt();
        System.out.print("Enter selling price: ");
        int selling = sc.nextInt();

        if(cost>selling){
            System.out.print("Loss: " + (cost-selling));
        }
        else{
            System.out.print("Profit: " + (selling-cost));
        }
    }
}
