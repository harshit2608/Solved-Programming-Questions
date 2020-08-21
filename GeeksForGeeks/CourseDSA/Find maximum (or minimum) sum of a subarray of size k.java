import java.util.*;

class Codechef {
	public long maxSum(long arr[], long n, long k) {
		if (n < k) {
			System.out.println("Invalid");
			return -1;
		}

		long res = 0;
		for (long i = 0; i < k; i++) {
			res += arr[(int) i];
		}
		long curr_sum = res;
		for (long i = k; i < n; i++) {
			curr_sum += arr[(int) i] - arr[(int) (i - k)];
			res = Math.max(res, curr_sum);
		}
		return res;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long t, n, arr[], k;
		t = sc.nextLong();
		while (t-- > 0) {
			n = sc.nextLong();
			arr = new long[(int) n];
			for (long i = 0; i < n; i++) {
				arr[(int) i] = sc.nextLong();
			}
			k = sc.nextLong();
			Codechef p = new Codechef();
			long ans = p.maxSum(arr, n, k);
			System.out.println(ans);
		}
		sc.close();
	}
}