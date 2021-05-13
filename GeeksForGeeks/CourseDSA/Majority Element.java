import java.util.*;

class Codechef {
	public long findMajority(long arr[], long n) {
		long res = 0, count = 1;
		for (long i = 1; i < n; i++) {
			if (arr[(int) i] == res) {
				count++;
			} else {
				count--;
			}
			if (count == 0) {
				res = i;
				count = 1;
			}
		}
		count = 0;
		for (long i = 0; i < n; i++) {
			if (arr[(int) res] == arr[(int) i]) {
				count++;
			}
		}
		if (count <= (n / 2)) {
			res = -1;
		}
		return res;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long t, n, arr[], ans;
		t = sc.nextLong();
		while (t-- > 0) {
			n = sc.nextLong();
			arr = new long[(int) n];
			for (long i = 0; i < n; i++) {
				arr[(int) i] = sc.nextLong();
			}
			Codechef p = new Codechef();
			ans = p.findMajority(arr, n);
			System.out.println(ans);
		}
		sc.close();
	}
}