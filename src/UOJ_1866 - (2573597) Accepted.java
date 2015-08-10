import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt(), x;

		for (int i = 0; i < n; i++) {
			x = in.nextInt();
			if(x % 2 == 0) System.out.println(0);
			else System.out.println(1);
		}
	}
}
