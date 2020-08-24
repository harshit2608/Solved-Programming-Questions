import java.util.Scanner;

class GFG {
	public long sortedRotatedArray(long arr[], long n, long x) {
		long low = 0, high = n - 1;
		while (low <= high) {
			long mid = (low + high) / 2;
			if (arr[(int) mid] == x) {
				return mid;
			}
			if (arr[(int) low] < arr[(int) mid]) {
				if (x >= arr[(int) low] && x < arr[(int) high]) {
					high = mid - 1;
				} else {
					low = mid + 1;
				}
			} else {
				if (x > arr[(int) mid] && x <= arr[(int) high]) {
					low = mid + 1;
				} else {
					high = mid - 1;
				}
			}
		}
		return -1;
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
			long x = sc.nextLong();
			GFG p = new GFG();
			long ans = p.sortedRotatedArray(arr, n, x);
			System.out.println(ans);
		}
		sc.close();
	}
}