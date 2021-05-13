import java.util.*;

class Codechef {
	public void flipArray(long arr[], long n) {
		for (long i = 1; i < n; i++) {
			if (arr[(int) i] != arr[(int) (i - 1)]) {
				if (arr[(int) i] != arr[0]) {
					System.out.print("From " + i + " to ");
				} else {
					System.out.print(i - 1 + " ");
				}
			}
		}
		if (arr[(int) (n - 1)] != arr[0]) {
			System.out.print(n - 1 + " ");
		}
	}

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
			Codechef p = new Codechef();
			p.flipArray(arr, n);
		}
		sc.close();
	}
}