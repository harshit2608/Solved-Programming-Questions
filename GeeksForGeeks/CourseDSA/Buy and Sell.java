// NAIVE SOLUTION
/*=========================*/
/*import java.util.Scanner;

class Codechef {
	public long stockBuySell(long arr[], long start, long end) {
		if (end <= start) {
			return 0;
		}
		long maxProfit = 0;
		for (long i = start; i < end; i++) {
			for (long j = i + 1; j <= end; j++) {
				if (arr[(int) j] > arr[(int) i]) {
					long currentProfit = (arr[(int) j] - arr[(int) i]) + stockBuySell(arr, start, i - 1) + stockBuySell(arr, j + 1, end);
					maxProfit = Math.max(maxProfit, currentProfit);
				}
			}
		}
		return maxProfit;
	}

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
			Codechef p = new Codechef();
			long ans = p.stockBuySell(arr, 0, n - 1);
			System.out.println(ans);
		}
		sc.close();
	}
}*/

// EFFICIENT SOLUTION 
/*=========================*/

import java.util.*;

class Codechef {
	public long stockBuySell(long arr[], long n) {
		long maxProfit = 0;
		for (long i = 1; i < n; i++) {
			if (arr[(int) i] > arr[(int) (i - 1)]) {
				maxProfit += arr[(int) i] - arr[(int) (i - 1)];
			}
		}
		return maxProfit;
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
			long ans = p.stockBuySell(arr, n);
			System.out.println(ans);
		}
		sc.close();
	}
}