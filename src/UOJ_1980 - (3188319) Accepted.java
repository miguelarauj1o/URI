import java.util.Scanner;

public class Main {

	public static long factorial(long size) {
		long r = 1;
		for (long i = 1; i <= size; i++) {
			r *= i;
		}
		return r;
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s;
		long sz;
		int t = 0;
		
		while(in.hasNext()) {
			s = in.nextLine();
			if(s.equals("0")) 
				break;
			sz = s.length();
			System.out.println(factorial(sz));
		}		
	}
}