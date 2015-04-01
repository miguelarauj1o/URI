import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {

	public static int countOccurrences(String haystack, char needle) {
		int count = 0;
		
		for (int i=0; i < haystack.length(); i++) {
			if (haystack.charAt(i) == needle){
			 	count++;
			}
		}
		
		return count;
	}
	
	public static void main(String[] args) throws IOException {
		
		InputStreamReader ir = new InputStreamReader(System.in);
		BufferedReader in = new BufferedReader(ir);
		
		int t, res;
		String bin;

		t = Integer.parseInt(in.readLine());

		for (int i = 0; i < t; ++i) {
			BigInteger bg = new BigInteger(in.readLine());
			bin = bg.toString(2);
			res = countOccurrences(bin, '1');
			System.out.println(res);
		}
	}
	
}