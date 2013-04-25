/*
A zero-indexed array A consisting of N integers is given. An equilibrium index of this 
array is any integer P such that 0 ≤ P < N and the sum of elements of lower indices is 
equal to the sum of elements of higher indices, i.e. 

A[0] + A[1] + ... + A[P−1] = A[P+1] + ... + A[N−2] + A[N−1].

Sum of zero elements is assumed to be equal to 0. This can happen if P = 0 or if P = N−1.
For example, consider the following array A consisting of N = 7 elements:

A[0] = -7   A[1] =  1   A[2] = 5
A[3] =  2   A[4] = -4   A[5] = 3
A[6] =  0

P = 3 is an equilibrium index of this array, because:
A[0] + A[1] + A[2] = A[4] + A[5] + A[6]

P = 6 is also an equilibrium index, because:
A[0] + A[1] + A[2] + A[3] + A[4] + A[5] = 0

and there are no elements with indices greater than 6.
P = 7 is not an equilibrium index, because it does not fulfill the condition 0 ≤ P < N.

Write a function that, given a zero-indexed array A consisting of N integers, returns 
any of its equilibrium indices. The function should return −1 if no equilibrium index exists.
Assume that:

N is an integer within the range [0..10,000,000];
each element of array A is an integer within the range [−2,147,483,648..2,147,483,647].

For example, given array A such that

A[0] = -7   A[1] =  1   A[2] = 5
A[3] =  2   A[4] = -4   A[5] = 3
A[6] =  0

the function may return 3 or 6, as explained above.

Complexity:
expected worst-case time complexity is O(N);
expected worst-case space complexity is O(N), beyond input storage (not counting the storage required for input arguments).
*/

class Equilibrium {
  
	//O(n) space, O(n) time
	public static int equi ( int[] A ) {

		if(A != null){

			long[] leftCumSum = new long[A.length];
			long[] rightCumSum = new long[A.length];

			long leftSum = 0;
			for(int i = 0; i < A.length; i++){
				leftSum += A[i];
				leftCumSum[i] = leftSum;
			}

			long rightSum = 0;
			for(int i = A.length-1; i >= 0; i--){
				rightSum += A[i];
				rightCumSum[i] = rightSum;
			}

			for(int i = 0; i < A.length; i++){
				if(i > 0 && i < A.length-1 && leftCumSum[i-1] == rightCumSum[i+1]){
					return i;
				}
				if(leftCumSum[i] == rightCumSum[i]){
					return i;
				}
			}
		}
		return -1;
	}

	public static void main(String Args[]){
		
		//Test cases
		int[] test0 = {};
		System.out.println(equi(test0));
		
		int[] test1 = {-100000};
		System.out.println(equi(test1));
		
		int[] test2 = {0,0,0,0,0,-100000};
		System.out.println(equi(test2));

		int[] test3 = {-100000,0,0,0,0,0};
		System.out.println(equi(test3));
		
		int[] test4 = {100,-20,0,-20,100};
		System.out.println(equi(test4));
	}

}
