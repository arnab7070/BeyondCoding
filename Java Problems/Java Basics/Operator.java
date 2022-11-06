public class Operator {
    public static void main(String[] args) {
        int p = 20, q = 10;
        System.out.println(p+q);
        System.out.println(p-q);
        System.out.println(p*q);
        System.out.println(p/q);
        System.out.println(p%q);
        System.out.println(p--);
        System.out.println(p==20);
        System.out.println(p==21);
        System.out.println(p!=21);
        System.out.println(p>10);
        System.out.println(p<19);
        System.out.println(!true);
        System.out.println(true && false);
        System.out.println(false || false);

        p += 2;
        System.out.println(p);
        q -= 2;
        System.out.println(q);
        p*=2;
        System.out.println(p);
        p/=2;
        System.out.println(p);

        int newval = --p;
        System.out.println(newval);
        newval = p--;
        System.out.println(newval); //20
        System.out.println(p); //19
    }
}
