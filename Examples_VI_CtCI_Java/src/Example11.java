
public class Example11 {
	//0 (n) runtime.
	
	static int factorial (int n) {
		if (n < 0) {
			return -1;
		} else if (n == 0) {
			return 1;
		} else {
			return n * factorial (n - 1);
		}
	}
	
	public static void main (String[] args) {
		
		System.out.println(factorial(5));
	}
}
