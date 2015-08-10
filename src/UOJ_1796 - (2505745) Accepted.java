import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        float q, v, r = 0;

        q = in.nextFloat();

        for (int i = 0; i < q; i++) {
            v = in.nextFloat();
            r += v;
        }

        if(r >= q/2) System.out.println("N");
        else System.out.println("Y");
    }
}
