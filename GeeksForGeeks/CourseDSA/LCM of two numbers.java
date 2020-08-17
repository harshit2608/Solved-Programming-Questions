import java.util.Scanner;

class GFG {

	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		long t, a, b, ans;
		t = sc.nextLong();
		while (t-- > 0) {
			a = sc.nextLong();
			b = sc.nextLong();
			ans = lcm(a,b);
			System.out.println(ans);
		}
		sc.close();
	}

	public static long lcm(long a,long b)
	{
		return (a*b)/gcd(a,b);
	}

	public static long gcd(long a,long b)
	{
		if (b==0)
		{
			return a;
		}
		else
		{
			return gcd(b,a%b);
		}
	}
}
