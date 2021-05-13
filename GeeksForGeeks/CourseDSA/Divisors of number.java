import java.util.Scanner;

class Codechef {
	public void divisors(long a) {
		long i;
		for (i = 1; i * i < a; i++) {
			if (a % i == 0) {
				System.out.print(i + " ");
			}
		}

		for (; i >= 1; i--) {
			if (a % i == 0) {
				System.out.print(a / i + " ");
			}
		}
	}

	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		long t, a;
		t = sc.nextLong();
		while (t-- > 0) {
			a = sc.nextLong();
			Codechef ans = new Codechef();
			ans.divisors(a);
		}
		sc.close();
	}
}