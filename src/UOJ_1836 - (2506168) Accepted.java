import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int t, l, bs, iv, ev;
        double s, hp;
        String str;

        t = in.nextInt();

        for (int i = 1; i <= t; i++) {
            str = in.next();
            l = in.nextInt();

            System.out.println("Caso #" + i + ": " + str + " nivel " + l);

            bs = in.nextInt();
            iv = in.nextInt();
            ev = in.nextInt();

            hp = (((iv + bs + (Math.sqrt(ev)/8)+50)*l)/50) + 10;

            System.out.println("HP: " + (int)hp);

            bs = in.nextInt();
            iv = in.nextInt();
            ev = in.nextInt();

            s = (((iv + bs + (Math.sqrt(ev)/8))*l)/50) + 5;

            System.out.println("AT: " + (int)s);

            bs = in.nextInt();
            iv = in.nextInt();
            ev = in.nextInt();

            s = (((iv + bs + (Math.sqrt(ev)/8))*l)/50) + 5;

            System.out.println("DF: " + (int)s);

            bs = in.nextInt();
            iv = in.nextInt();
            ev = in.nextInt();

            s = (((iv + bs + (Math.sqrt(ev)/8))*l)/50) + 5;

            System.out.println("SP: " + (int)s);
        }
    }
}
