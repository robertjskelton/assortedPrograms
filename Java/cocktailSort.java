/** 
*
* Author: 		Robert Skelton
* Date 			1.9.13
* Filename: 	cocktailSort.java
* Email: 		robertjskelton@gmail.com
* Description:  Basic implementation of a cockatil sort. 
*
*/


public class cocktailSort {
	public static void main(String[] args) {
		int[] intArray1 = {1,2,6,1,9,10101,234,02,55,92};
		int max = intArray1[0];
		for (int i =0; i < intArray1.length; i++) {
			if (intArray1[i] > max)
				max = intArray1[i];
		}
		System.out.println("The max value is: " + max);
		System.out.println("test");
	}
}