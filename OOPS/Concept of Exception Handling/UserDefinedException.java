class EligibilityException extends Exception {
    @Override
    public String getMessage() {
        return "Error: Not Eligibile for voting";
    }
}
public class UserDefinedException {
    public static void vote(int age) throws EligibilityException {
        if(age < 18) throw new EligibilityException();
    }
    public static void main(String[] args) {
        try {
            vote(12);
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}