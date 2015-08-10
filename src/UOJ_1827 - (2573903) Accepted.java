import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n, a, b, t;

        while(in.hasNextInt()) {
            n = in.nextInt();
            a = 0;
            b = (n-1);
            t = (int) Math.ceil(n/2.0);
            int[][] arr = new int[n][n];

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if(n/2 == i && n/2 == j) {
                        arr[i][j] = 4;
                    }else if(i >= n/3 && j >= n/3 && (n - i) > n/3 && (n - j) > n/3) {
                        arr[i][j] = 1;
                    }else if(i == j) {
                        arr[i][j] = 2;
                    }else if(i == a && j == b) {
                        arr[i][j] = 3;
                    }else {
                        arr[i][j] = 0;
                    }
                }
                a++;
                b--;
            }

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    System.out.print(arr[i][j]);
                }
                System.out.println();
            }
            System.out.println();
        }
    }
}