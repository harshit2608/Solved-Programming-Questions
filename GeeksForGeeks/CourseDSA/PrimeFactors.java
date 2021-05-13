import java.util.Scanner;

class Codechef {

	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		long t, a;
		t = sc.nextLong();
		while (t-- > 0) {
			a = sc.nextLong();
			primeFactors(a);
		}
		sc.close();
	}

	public static void primeFactors(long a) {
		if (a <= 1) {
			System.out.print("No Prime Factors");
			return;
		}
		while (a % 2 == 0) {
			System.out.print(2 + " ");
			a = a / 2;
		}
		while (a % 3 == 0) {
			System.out.print(3 + " ");
			a = a / 2;
		}
		for (long i = 5; i * i <= a; i = i + 6) {
			while (a % i == 0) {
				System.out.print(i + " ");
				a = a / i;
			}
			while (a % (i + 2) == 0) {
				System.out.print((i + 2) + " ");
				a = a / (i + 2);
			}
		}
		if (a > 3) {
			System.out.println(a);
		}
	}
}
