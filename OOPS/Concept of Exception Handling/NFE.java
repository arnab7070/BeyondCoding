public class NFE {
    // NumberFormatException
    public static void main(String[] args) {
        try {
            String str = "Arnab";
            int a = Integer.parseInt(str);
            System.out.println(a);
        } catch (Exception e) {
            System.out.println("Error: "+e);
        }
    }
}
