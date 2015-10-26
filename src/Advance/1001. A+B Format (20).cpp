/*
* 1001. A+B Format (20)
*
* Calculate a + b and output the sum in standard format -- that is, the digits must be separated into groups of three by commas (unless there are less than four digits).
*
* Input
*
* Each input file contains one test case. Each case contains a pair of integers a and b where -1000000 <= a, b <= 1000000. The numbers are separated by a space.
*
* Output
*
* For each test case, you should output the sum of a and b in one line. The sum must be written in the standard format.
*
* Sample Input
* -1000000 9
* Sample Output
* -999,991
*/
#include <cstdio>
#include <cstdlib>

#define LOCAL

int main()
{
	int a = 0;
	int b = 0;
	while ( scanf("%d %d", &a, &b) != EOF)
	{
		int sum = a + b;
		if (sum < 0)
		{
			printf("-");
			sum = -sum;
		}

		if (sum < 1000)
			printf("%d\n", sum); 
		else if (sum < 1000000)
			printf("%d,%03d\n", sum / 1000, sum % 1000);
		else
			printf("%d,%03d,%03d\n", sum / 1000000, (sum % 1000000) / 1000, sum % 1000 );
	}

	return 0;
}

