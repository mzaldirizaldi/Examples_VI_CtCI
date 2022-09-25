
public class Example6 {
	// 0 (N) runtime.
	
	static void reverse(int[] array) {
		for (int i = 0; i < array.length / 2; i++) {
			int other = array.length - i - 1;
			int temp = array[i];
			array[i] = array[other];
			array[other] = temp;
			System.out.println(array[i] + ", " + array[other]);
		}
	}
	
	public static void main(String[] args) {
		int[] array = {1, 2, 3, 4, 5, 6, 7, 8};
		
		reverse(array);
	}
}
