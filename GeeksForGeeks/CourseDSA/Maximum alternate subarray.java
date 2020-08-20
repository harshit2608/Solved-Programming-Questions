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
			long current = 1, res = 1;
			for (long i = 1; i < n; i++) {
				if (((arr[(int) i] % 2 == 0) && (arr[(int) (i - 1)] % 2 != 0)) || (arr[(int) i] % 2 != 0) && (arr[(int) (i - 1)] % 2 == 0)) {
					current++;
					res = Math.max(res, current);
				} else {
					current = 1;
				}
			}
			System.out.println(res);
		}
		sc.close();
	}
}