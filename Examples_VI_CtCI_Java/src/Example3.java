
public class Example3 {
	//0 (N2) runtime.
	
	static void printUnorderedPairs(int[] array) {
		for (int i = 0; i < array.length; i++) {
			for (int j = i + 1; j < array.length; j++) {
				System.out.println(array[i] + ", " + array[j]);
			}
		}
	}
	
	public static void main(String[] args) {
		int[] array = {1, 2, 3, 4, 5, 6, 7};
		
		printUnorderedPairs(array);
	}
}
