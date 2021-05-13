// NAIVE SOLUTION
/*===============================*/


import java.util.*;

class Codechef {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long t, n, arr[];
		t = sc.nextLong();
		while (t-- > 0) {
			n = sc.nextLong();
			arr = new long[(int) n];
			for (long i = 0; i < n; i++) {
				arr[(int) i] = sc.nextLong();
			}
			long current = 0, res = 0;
			for (long i = 0; i < n; i++) {
				if (arr[(int) i] == 0) {
					current = 0;
				} else {
					current++;
					res = Math.max(res, current);
				}
			}
			System.out.println(res);
		}
		sc.close();
	}
}