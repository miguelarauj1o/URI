import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = "EPR", b = "EHD", c = "INTRUSOS", t;
        int i, n, ac, ec, ic, m;

        while(in.hasNext()) {
            n = in.nextInt();
            ac = ec = ic = 0;

            for (i = 0; i < n; i++) {
                m = in.nextInt();
                t = in.next();

                if(t.equals(a)) ac++;
                else if(t.equals(b)) ec++;
                else ic++;
            }

            System.out.println(a + ": " + ac);
            System.out.println(b + ": " + ec);
            System.out.println(c + ": " + ic);
        }
    }
}
