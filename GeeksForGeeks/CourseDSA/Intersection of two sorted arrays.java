import java.util.Scanner;

class Solution {
	public void intersectionofsortedarray(int arr1[], int arr2[]) {
		int n = arr1.length, m = arr2.length;
		int i = 0, j = 0;
		while (i < n && j < m) {
			if (i > 0 && arr1[i - 1] == arr1[i]) {
				i++;
				continue;
			}
			if (arr1[i] < arr2[j]) {
				i++;
			} else if (arr1[i] > arr2[j]) {
				j++;
			} else {
				System.out.print(arr1[i] + " ");
				i++;
				j++;
			}
		}
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t, a, b, arr1[], arr2[];
		t = sc.nextInt();
		while (t-- > 0) {
			a = sc.nextInt();
			arr1 = new int[a];
			for (int i = 0; i < a; i++) {
				arr1[i] = sc.nextInt();
			}
			b = sc.nextInt();
			arr2 = new int[a];
			for (int i = 0; i < b; i++) {
				arr2[i] = sc.nextInt();
			}
			Solution p = new Solution();
			p.intersectionofsortedarray(arr1, arr2);
		}
		sc.close();
	}
}