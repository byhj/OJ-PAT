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
#include <iostream>

using namespace std;

#define LOCAL

int main()
{
	int a = 0;
	int b = 0;
	while (cin >> a >> b)
	{
		int sum = a + b;
		bool op = false;
		if (sum < 0)
			op = true;
		sum = abs(sum);

		//Negative add a '-'
		if (op)
			cout << "-";

		if (sum < 1000)
			cout << sum << endl;
		else if (sum < 1000000)
			cout << sum / 1000 << "," << sum % 1000 << endl;
		else
			cout << sum / 1000000 << "," << (sum % 1000000) / 1000
			<< "," << sum % 1000 << endl;
	}

	return 0;
}

