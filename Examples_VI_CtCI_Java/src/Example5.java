
public class Example5 {
	// 0 (ab) runtime.
	
	static void printUnorderedPairs (int[] arrayA, int[] arrayB) {
		for (int i = 0; i < arrayA.length; i++) {
			for (int j = 0; j < arrayB.length; j++) {
				for (int k = 0; k < 100000; k++) {
					System.out.println(arrayA[i] + ", " + arrayB[j]);
				}
			}
		}
	}
	
	public static void main(String[] args) {
		int[] arrayA = {1, 2, 3, 4, 5};
		int[] arrayB = {1, 2, 3, 4, 5};
		
		printUnorderedPairs(arrayA, arrayB);
	}
}
