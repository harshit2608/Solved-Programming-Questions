import java.util.Scanner;

class GFG {
	public int peakElement(int arr[], int n) {
		int low = 0, high = n - 1;
		while (low <= high) {
			int mid = (low + high) / 2;
			if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid])) {
				return arr[mid];
			}
			if (mid > 0 && arr[mid - 1] >= arr[mid]) {
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		return -1;
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
			GFG p = new GFG();
			int ans = p.peakElement(arr, arr.length);
			System.out.println(ans);
		}
		sc.close();
	}
}