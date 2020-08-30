import java.util.Arrays;
import java.util.Scanner;

class MeetingGuests {
	int maxGuest(int arr[], int dep[], int n) {
		Arrays.sort(arr);
		Arrays.sort(dep);
		int i = 1, j = 0, res = 1, curr = 1;
		while (i < n && j < n) {
			if (arr[i] <= dep[j]) {
				curr++;
				i++;
			} else {
				curr--;
				j++;
			}
			res = Math.max(res, curr);
		}
		return res;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t, n;
		t = sc.nextInt();
		while (t-- > 0) {
			n = sc.nextInt();
			int[] arr = new int[n];
			int[] dep = new int[n];
			for (int i = 0; i < n; i++) {
				arr[i] = sc.nextInt();
			}
			for (int i = 0; i < n; i++) {
				dep[i] = sc.nextInt();
			}
			MeetingGuests sol = new MeetingGuests();
			int ans = sol.maxGuest(arr, dep, n);
			System.out.println(ans);
		}
		sc.close();
	}
}