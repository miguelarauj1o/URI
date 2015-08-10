import java.util.Scanner;

public class Main {

	public static int foo(String s) {

		if(s.equals("--*")) return 1;
		else if(s.equals("-*-")) return 2;
		else if(s.equals("-**")) return 3;
		else if(s.equals("*--")) return 4;
		else if(s.equals("*-*")) return 5;
		else if(s.equals("**-")) return 6;
		else if(s.equals("***")) return 7;
		else return 8;
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s;
		int n, t = 0;

		while(in.hasNextLine()) {
			s = in.nextLine();

			if(s.equals("caw caw")) {
				System.out.println(t);
				t = 0;
			}else {
				n = foo(s);
				t += n;
			}
		}
	}
}
