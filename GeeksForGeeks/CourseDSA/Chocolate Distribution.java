import java.util.*;

class Codechef {
	public int chocolateDistribution(int arr[], int n, int m) {
		if (m > n) {
			return -1;
		}
		Arrays.sort(arr);
		int res = arr[m - 1] - arr[0];
		for (int i = 1; (i + m - 1) < n; i++) {
			res = Math.min(res, arr[i + m - 1] - arr[i]);
		}
		return res;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t, n, arr[];
		t = sc.nextInt();
		while (t-- > 0) {
			n = sc.nextInt();
			arr = new int[n];
			for (int i = 0; i < n; i++) {
				arr[i] = sc.nextInt();
			}
			int m = sc.nextInt();
			Codechef p = new Codechef();
			int ans = p.chocolateDistribution(arr, n, m);
			System.out.println(ans);
		}
		sc.close();
	}
}