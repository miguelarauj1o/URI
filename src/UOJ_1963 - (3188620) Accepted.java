import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		float a, b;
		a = in.nextFloat(); b = in.nextFloat();
		String fs = String.format("%.02f", (b - a)/a * 100);
		System.out.println(fs + "%");
	}
}