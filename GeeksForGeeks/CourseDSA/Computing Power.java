import java.util.Scanner;

class Codechef {
	public long power(long x, long n) {
		long res = 1;
		while (n > 0) {
			if (n % 2 != 0) {
				res = res * x;
			}
			n = n / 2;
			x = x * x;
		}
		return res;
	}

	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		long t, x, n, ans;
		t = sc.nextLong();
		while (t-- > 0) {
			x = sc.nextLong();
			n = sc.nextLong();
			Codechef p = new Codechef();
			ans = p.power(x, n);
			System.out.println(ans);
		}
		sc.close();
	}
}