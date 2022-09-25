public class Example1 {
	// 0 (N) runtime.
	
	static void foo(int[] array) {
		int sum = 0;
		int product = 1;
		
		for (int i = 0; i < array.length; i++) {
			sum += array[i];
		}
		for (int i = 0; i < array.length; i++) {
			product *= array [i];
		}
		System.out.println(sum + ", " + product);
	}
	
	public static void main(String[] args) {
		int[] array = {1, 2, 3, 4, 5};
		
		foo(array);
	}
}