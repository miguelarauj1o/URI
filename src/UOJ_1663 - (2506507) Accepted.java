import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int[] arr = new int[1000005];
        int[] inv = new int[1000005];
        int n, cnt;

        n = in.nextInt();

        while(true) {
            if(n == 0) {
                break;
            }

            cnt = 0;

            for (int i = 1; i <= n; i++) {
                arr[i] = in.nextInt();
                inv[arr[i]] = i;
            }

            for (int i = 1; i <= n; i++) {
                if(arr[i] == inv[i]) {
                    cnt++;
                }
            }

            if(cnt == n) System.out.println("ambiguous");
            else System.out.println("not ambiguous");

            n = in.nextInt();
        }
    }
}
