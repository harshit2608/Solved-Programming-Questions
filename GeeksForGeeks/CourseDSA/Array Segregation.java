import java.util.*;

class Codechef {
	void segregateArray(int arr[], int n) {
		int i = -1, j = n;
		while (true) {
			do {
				i++;
			} while (arr[i] < 0);
			do {
				j--;
			} while (arr[j] >= 0);
			if (i >= j) {
				return;
			}
			swap(arr, i, j);
		}
	}

	void display(int arr[], int n) {
		for (int i = 0; i < n; i++) {
			System.out.print(arr[i] + " ");
		}
	}

	void swap(final int arr[], final int pos1, final int pos2) {
		final int temp = arr[pos1];
		arr[pos1] = arr[pos2];
		arr[pos2] = temp;
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
			Codechef p = new Codechef();
			p.segregateArray(arr, n);
			p.display(arr, arr.length);
		}
		sc.close();
	}
}