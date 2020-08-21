import java.util.*;

class Codechef {
	public long subArraySum(long arr[], long n, long sum) {
		long curr_sum = arr[0], start = 0, i;

		// Pick a starting point
		for (i = 1; i <= n; i++) {
			// If curr_sum exceeds the sum, then remove the starting elements
			while (curr_sum > sum && start < i - 1) {
				curr_sum = curr_sum - arr[(int) start];
				start++;
			}
			if (curr_sum == sum) {
				long p = i - 1;
				System.out.println("Sum found between indexes " + start + " and " + p);
				return 1;
			}
			if (i < n) {
				curr_sum = curr_sum + arr[(int) i];
			}
		}
		System.out.println("No subarray found");
		return 0;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long t, n, arr[], sum;
		t = sc.nextLong();
		while (t-- > 0) {
			n = sc.nextLong();
			arr = new long[(int) n];
			for (long i = 0; i < n; i++) {
				arr[(int) i] = sc.nextLong();
			}
			sum = sc.nextLong();
			Codechef p = new Codechef();
			long ans = p.subArraySum(arr, n, sum);
			System.out.println(ans);
		}
		sc.close();
	}
}