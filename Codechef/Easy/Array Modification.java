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
		int t,n;
		long k;
		int arr[];
		t = sc.nextInt();
		while (t != 0) {
			n = sc.nextInt();
			k = sc.nextLong();
			arr = new int[n];
			for(int i=0;i<n;i++)
			{
				arr[i] = sc.nextInt();
            }
            if(n%2==1 && k>n/2)
			{
				a[(int)n/2]=0;
			}
			k=k%(3*n);
			for(int i=0;i<=k-1;i++)
			{
				arr[i%n]=arr[i%n]^arr[n-(i%n)-1];
			}
			for(int i=0;i<n;i++)
			{
				System.out.println(arr[i]);
			}
			t--;
		}
		sc.close();
	}
}
