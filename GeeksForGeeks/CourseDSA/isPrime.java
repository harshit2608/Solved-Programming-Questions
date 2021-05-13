import java.util.Scanner;

class GFG {

	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		long t, a;
		boolean ans;
		t = sc.nextLong();
		while (t-- > 0) {
			a = sc.nextLong();
			ans = isPrime(a);
			if (ans == true) {
				System.out.println("Yes");
			} else if (ans == false) {
				System.out.println("No");
			}
		}
		sc.close();
	}

	public static boolean isPrime(long a) {
		if (a == 1) {
			return false;
		}
		if (a == 2 || a == 3) {
			return true;
		}
		if (a % 2 == 0 || a % 3 == 0) {
			return false;
		}
		for (long i = 5; i * i <= a; i += 6) {
			if (a % i == 0 || a % (i + 2) == 0) {
				return false;
			}
		}
		return true;
	}
}
