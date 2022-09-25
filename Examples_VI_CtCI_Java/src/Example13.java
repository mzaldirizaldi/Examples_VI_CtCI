import java.util.*;

public class Example13 {
	//0 (2^N) runtime.
	
	static int fib (int n) {
		if (n <= 0) return 0;
		else if (n == 1) return 1;
		return fib(n - 1) + fib (n - 2);
	}
	
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter number: ");
		int n = sc.nextInt();
		System.out.println("Fibonacci value for " + n + " is " + fib(n));
		sc.close();
	}
}
