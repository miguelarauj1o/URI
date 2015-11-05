import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s;
		s = in.nextLine();
		String rev = new StringBuilder(s).reverse().toString();
		System.out.println(rev);
	}
}