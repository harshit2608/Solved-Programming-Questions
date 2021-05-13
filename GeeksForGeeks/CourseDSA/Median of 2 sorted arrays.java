import java.util.Scanner;

class GFG {
	public double medianofsortedarray(int arr1[], int arr2[]) {
		int a = arr1.length, b = arr2.length;
		int begin = 0, end = a;
		while (begin < end) {
			int i1 = (begin + end) / 2;
			int i2 = (a + b + 1) / 2 - i1;
			int min1, min2, max1, max2;
			min1 = (i1 == a) ? Integer.MAX_VALUE : arr1[i1];
			max1 = (i1 == 0) ? Integer.MIN_VALUE : arr1[i1 - 1];
			min2 = (i2 == b) ? Integer.MAX_VALUE : arr2[i2];
			max2 = (i2 == 0) ? Integer.MIN_VALUE : arr2[i2 - 1];
			if (max1 <= min2 && max2 <= min1) {
				if ((a + b) % 2 == 0) {
					return ((double) Math.max(max1, max2) + Math.min(min1, min2)) / 2;
				} else {
					return ((double) Math.max(max1, max2));
				}
			} else if (max1 > min2) {
				end = i1 - 1;
			} else {
				begin = i1 + 1;
			}
		}
		return 0;
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
			GFG p = new GFG();
			double ans = p.medianofsortedarray(arr1, arr2);
			System.out.println(ans);
		}
		sc.close();
	}
}


//Sample Test Case
//		3
//		5
//		10 20 30 40 50
//		5
//		5 15 25 35 45
// ANS  27.5
//		6
//		1 2 3 4 5 6
//		5
//		10 20 30 40 50
// ANS 	6.0
//		6
//		10 20 30 40 50 60
//		5
//		1 2 3 4 5
// ANS  10.0