
public class Example10 {
	//0 (sqrt n) runtime.
	
	static boolean isPrime(int n) {
		for (int x = 2; x * x <= n; x++) {
			if (n % x == 0) {
				System.out.println(n + " is not a prime number.");
				return false;
			}
		}
		System.out.println(n + " is a prime number.");
		return true;
	}
	
	public static void main(String[] args) {
		isPrime(10);
	}
}
