import java.util.*;

class Codechef {
	public long kadaneAlgo(long arr[], long n) {
		long res = arr[0], curr = arr[0];
		for (long i = 1; i < n; i++) {
			curr = Math.max(arr[(int) i], curr + arr[(int) i]);
			res = Math.max(res, curr);
		}
		return res;
	}

	public long circularSum(long arr[], long n) {
		long max_normal = kadaneAlgo(arr, n);
		if (max_normal < 0) {
			return max_normal;
		}
		long arr_sum = 0;
		for (long i = 0; i < n; i++) {
			arr_sum += arr[(int) i];
			arr[(int) i] = -arr[(int) i];
		}
		long max_circular = arr_sum + kadaneAlgo(arr, n);
		return Math.max(arr_sum, max_circular);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long t, n, arr[], ans = 0;
		t = sc.nextLong();
		while (t-- > 0) {
			n = sc.nextLong();
			arr = new long[(int) n];
			for (long i = 0; i < n; i++) {
				arr[(int) i] = sc.nextLong();
			}
			Codechef p = new Codechef();
			ans = p.circularSum(arr, n);
			System.out.println(ans);
		}
		sc.close();
	}
}