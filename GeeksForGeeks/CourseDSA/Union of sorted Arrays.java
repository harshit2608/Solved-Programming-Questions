import java.util.Scanner;

class Solution {
	public void unionofsortedarray(int arr1[], int arr2[]) {
		int n = arr1.length, m = arr2.length;
		int i = 0, j = 0;
		while (i < n && j < m) {
			if (i > 0 && arr1[i] == arr1[i - 1]) {
				i++;
				continue;
			}
			if (j > 0 && arr2[j] == arr2[j - 1]) {
				j++;
				continue;
			}
			if (arr1[i] < arr2[j]) {
				System.out.print(arr1[i] + " ");
				i++;
			} else if (arr1[i] > arr2[j]) {
				System.out.print(arr2[j] + " ");
				j++;
			} else if (arr1[i] == arr2[j]) {
				System.out.print(arr1[i] + " ");
				i++;
				j++;
			}
		}
		while (i < n) {
			if (i == 0 || arr1[i] != arr1[i - 1]) {
				System.out.print(arr1[i] + " ");
			}
			i++;
		}
		while (j < m) {
			if (j == 0 || arr2[j] != arr2[j - 1]) {
				System.out.print(arr2[j] + " ");
			}
			j++;
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
			arr2 = new int[b];
			for (int j = 0; j < b; j++) {
				arr2[j] = sc.nextInt();
			}
			Solution p = new Solution();
			p.unionofsortedarray(arr1, arr2);
		}
		sc.close();
	}
}