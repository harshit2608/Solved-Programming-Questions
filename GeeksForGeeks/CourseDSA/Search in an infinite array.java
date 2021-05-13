import java.util.Scanner;

class GFG {
	public long binarySearch(long arr[], long x, long low, long high) {
		while (low <= high) {
			long mid = (low + high) / 2;
			if (arr[(int) mid] == x) {
				return mid;
			} else if (x < arr[(int) mid]) {
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		return -1;
	}

	public long infiniteSearch(long arr[], long n, long x) {
		if (arr[0] == x) {
			return 0;
		}
		long i = 1;
		while (arr[(int) i] < x) {
			i = i * 2;
		}
		if (arr[(int) i] == x) {
			return i;
		}
		return binarySearch(arr, x, (i / 2) + 1, i - 1);
	}


	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long t, arr[];
		t = sc.nextLong();
		while (t-- > 0) {
			arr = new long[30];
			arr[0] = 0;
			arr[1] = 1;
			for (long i = 2; i < arr.length; i++) {
				arr[(int) i] = arr[(int) (i - 1)] + arr[(int)(i-2)];
			}
			System.out.println("Fibonnaci series of size " + arr.length + " is generated below and shown ");
			for (long i = 0; i < arr.length; i++) {
				System.out.print(arr[(int) i] + " ");
			}
			long x = sc.nextLong();
			GFG p = new GFG();
			long ans = p.infiniteSearch(arr, arr.length, x);
			System.out.println(ans);
		}
		sc.close();
	}
}