import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		byte n = in.nextByte();
		byte min = 21, r = 0, x, i;

		for (i = 1; i <= n; i++) {
			x = in.nextByte();
			if(min > x) {
				min = x;
				r = i;
			}
		}

		System.out.println(r);
	}
}