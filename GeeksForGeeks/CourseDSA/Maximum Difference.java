import java.util.Scanner;

class Codechef {
	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		long t, d, n;
		long arr[];
		t = sc.nextLong();
		while (t-- > 0) {
			n = sc.nextLong();
			arr = new long[(int) n];
			for (long i = 0; i < n; i++) {
				arr[(int) i] = sc.nextLong();
			}

			long res = arr[1] - arr[0];
			long minval = arr[0];
			for (long j = 1; j < n; j++) {
				res = Math.max(res, arr[(int) j] - minval);
				minval = Math.min(minval, arr[(int) j]);
			}

			System.out.println(res);
		}
		sc.close();
	}
}