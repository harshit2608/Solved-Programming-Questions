import java.util.*;

class Codechef {
	public void nbonacci(long n, long m) {
		long arr[] = new long[(int) m];
		for (long i = 0; i < m; i++) {
			arr[(int) i] = 0;
		}
		arr[(int) n] = 1;
		arr[(int) (n - 1)] = 1;
		for (long i = n + 1; i < m; i++) {
			arr[(int) i] = 2 * arr[(int) (i - 1)] - arr[(int) (i - n - 1)];
		}

		for (long i = 0; i < m; i++) {
			System.out.print(arr[(int) i] + " ");
		}
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long t, n, m;
		t = sc.nextLong();
		while (t-- > 0) {
			n = sc.nextLong();
			m = sc.nextLong();
			Codechef p = new Codechef();
			p.nbonacci(n, m);
		}
		sc.close();
	}
}