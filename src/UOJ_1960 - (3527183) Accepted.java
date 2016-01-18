import java.util.Scanner;

public class Main {
    public static String intToRoman(int n) {
        StringBuilder sb = new StringBuilder();
        String[] romans = new String[] {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        int[] ints = new int[] { 1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000 };
        int t = 0, i, sz = ints.length - 1;

        for (i = sz; i >= 0; i--) {
            t = n / ints[i];
            n %= ints[i];
            while (t > 0) {
                sb.append(romans[i]);
                t--;
            }
        }

        return sb.toString();
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        System.out.println(intToRoman(n));
    }
}
