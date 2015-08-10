import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int m, n;
		String s;

		while(in.hasNextLine()) {
			m = in.nextInt(); n = in.nextInt();

			if(m == 0 && n == 0) {
				break;
			}

			s = Integer.toString(m + n);
			s = s.replace("0", "");
			System.out.println(s);
		}
	}
}
