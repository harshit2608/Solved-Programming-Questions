import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

class Intervals {
	int start, end;

	Intervals(int start, int end) {
		this.start = start;
		this.end = end;
	}
}

class MergeIntervals {
	void mergeOverlappingIntervals(Intervals arr[], int n) {
		Arrays.sort(arr, new Comparator<Intervals>() {
			public int compare(Intervals i1, Intervals i2) {
				return i1.start - i2.start;
			}
		});
		int res = 0;
		for (int i = 1; i < n; i++) {
			if (arr[res].end >= arr[i].start) {
				arr[res].end = Math.max(arr[res].end, arr[i].end);
				arr[res].start = Math.min(arr[res].start, arr[i].start);
			} else {
				res++;
				arr[res] = arr[i];
			}
		}

		for (int i = 0; i <= res; i++) {
			System.out.println("{" + arr[i].start + " " + arr[i].end + "}");
		}
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t, n;
		t = sc.nextInt();
		while (t-- > 0) {
			n = sc.nextInt();
			Intervals[] arr = new Intervals[n];
			for (int i = 0; i < n; i++) {
				int a = sc.nextInt();
				int b = sc.nextInt();
				arr[i] = new Intervals(a, b);
			}
			MergeIntervals sol = new MergeIntervals();
			sol.mergeOverlappingIntervals(arr, n);
		}
		sc.close();
	}
}