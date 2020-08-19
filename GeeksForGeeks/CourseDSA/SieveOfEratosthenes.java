import java.util.Scanner;

class Codechef {
	public static void SieveOfEratosthenes(int a) {
		if(a<=1)
		{
			return;
		}
		boolean arr[] = new boolean[(a + 1)];
		for (int i = 0; i < a; i++) {
			arr[i] = true;
		}
		for (int i = 2; i * i <= a; i++) {
			if (arr[i] == true) {
				for (int j = i * i; j <= a; j = j + i) {
					arr[j] = false;
				}
			}
		}

		for (int i = 2; i <= a; i++) {
			if (arr[i] == true) {
				System.out.print(i + " ");
			}
		}
	}

	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		int t, a;
		t = sc.nextInt();
		while (t-- > 0) {
			a = sc.nextInt();
			SieveOfEratosthenes(a);
		}
		sc.close();
	}
}