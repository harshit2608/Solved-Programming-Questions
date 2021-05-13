import java.util.Scanner;

class Codechef {
	public void rotate(long arr[], long n, long d) {
		reverse(arr, 0, d - 1);
		reverse(arr, d, n - 1);
		reverse(arr, 0, n - 1);
		for (long i = 0; i < n; i++) {
			System.out.print(arr[(int) i] + " ");
		}
	}

	public void reverse(long arr[], long low, long high) {
		while (low < high) {
			long temp = arr[(int) low];
			arr[(int) low] = arr[(int) high];
			arr[(int) high] = temp;
			low++;
			high--;
		}
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
			d = sc.nextLong();
			Codechef p = new Codechef();
			p.rotate(arr, n, d);
		}
		sc.close();
	}
}