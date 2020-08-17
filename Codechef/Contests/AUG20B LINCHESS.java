/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		long t;
		int length =1001;
		int[] arr =new int[length];
		t = sc.nextLong();
		while (t != 0) {
			long ans = -1,n, k, minimum = 1000000000;
			n = sc.nextInt();
			k = sc.nextInt();
			for (int i = 0; i < n; i++) {
				arr[i] = sc.nextInt();
			}

			for (int i = 0; i < n; i++) {
				if ((k % arr[i]) == 0) {
					long temp = (k / arr[i]);
					if (temp < minimum) {
						minimum = temp;
						ans = arr[i];
					}
				}
			}
			System.out.println(ans);
			t--;
		}
	}
}
