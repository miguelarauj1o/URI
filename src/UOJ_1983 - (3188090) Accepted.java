import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n, x, s = 0;
		float f = 0, m = 0;
		n = in.nextInt();
		
		for (int i = 0; i < n; i++) {
			x = in.nextInt();
			f = in.nextFloat();
			if(m < f) {
				m = f;
				s = x;
			}
		}

		if(m >= 8.0) System.out.println(s);
		else System.out.println("Minimum note not reached");
	}
}