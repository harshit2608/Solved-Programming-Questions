// NAIVE SOLUTION
/*===============================*/
/*
import java.util.*;

class Codechef {
	public long trappingRainWater(long arr[], long n) {
		long water = 0;
		for (long i = 1; i < n - 1; i++) {
			long lbar = arr[(int) i], rbar = arr[(int) i];
			for (long j = 0; j < i; j++) {
				lbar = Math.max(lbar, arr[(int) j]);
			}
			for (long j = i + 1; j < n; j++) {
				rbar = Math.max(rbar, arr[(int) j]);
			}
			water += Math.min(lbar, rbar) - arr[(int) i];
		}
		return water;
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
			long ans = p.trappingRainWater(arr, n);
			System.out.println(ans);
		}
		sc.close();
	}
}
*/

// EFFICIENT SOLUTION
/*===============================*/

import java.util.*;

class Codechef {
	public long trappingRainWater(long arr[], long n) {
		long water = 0;
		long lmax[] = new long[(int) n], rmax[] = new long[(int) n];
		lmax[0] = arr[0];
		for (long i = 1; i < n; i++) {
			lmax[(int) i] = Math.max(lmax[(int) (i - 1)], arr[(int) i]);
		}
		rmax[(int) (n - 1)] = arr[(int) (n - 1)];
		for (long i = n - 2; i >= 0; i--) {
			rmax[(int) i] = Math.max(rmax[(int) (i + 1)], arr[(int) (i)]);
		}
		for (long i = 1; i < n - 1; i++) {
			water += Math.min(lmax[(int) i], rmax[(int) i]) - arr[(int) i];
		}
		return water;
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
			long ans = p.trappingRainWater(arr, n);
			System.out.println(ans);
		}
		sc.close();
	}
}