import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int qt = in.nextInt();
        int x, y;
        String j1, j2, e1, e2;

        for (int i = 0; i < qt; i++) {
            j1 = in.next(); e1 = in.next();
            j2 = in.next(); e2 = in.next();
            x = in.nextInt(); y = in.nextInt();

            if((x + y) % 2 == 0) {
                if(e1.equals("PAR")) System.out.println(j1);
                else System.out.println(j2);
            }else {
                if(e1.equals("PAR")) System.out.println(j2);
                else System.out.println(j1);
            }
        }
    }
}