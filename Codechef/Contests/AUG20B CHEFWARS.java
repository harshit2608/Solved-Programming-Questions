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
		int t,p,h;
		t = sc.nextInt();
		while(t!=0)
		{
			h = sc.nextInt();
			p = sc.nextInt();
			for (int i = 0; i < p; i = p / 2)
			{
				h = h - p;
				p = p / 2;
				if (h <= 0)
				{
					System.out.println("1");
					break;
				}
				else if (p <= 0)
				{
					System.out.println("0");
					break;
				}
			}
			t--;
		}
	}
}
