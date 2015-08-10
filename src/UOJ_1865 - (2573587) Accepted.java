import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s;
		int n = in.nextInt(), x;

		for (int i = 0; i < n; i++) {
			s = in.next();
			x = in.nextInt();

			if(s.equals("Thor")) System.out.println("Y");
			else System.out.println("N");
		}
	}
}
