/* These algorithm that created by Eratosthenes */
/* count primes that smaller 100 */

#include <stdio.h>

#define N 1000

int main()
{
	int i,j a[N+1];
	
	for (a[1] = 0, i=2; i<=N; i++)	// the loop to store value of a[i] , with i belong [2, 1000].
		a[i] = 1;		// a[i] = 1, with a[2]=1, a[3]=1, a[4]=1 ...
					/// progress to store 999 values by 1
	
	for (i=2; i <= N/2; i++)	// i belong [2, 500].
		for (j=2; j <= N/i; j++)
			a[i*j] = 0;
}
