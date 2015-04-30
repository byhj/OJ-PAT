/* This time, you are supposed to find A+B where A and B are two polynomials.
 * 
 * Input
 * 
 * Each input file contains one test case. Each case occupies 2 lines, and each line contains the information of a polynomial: K N1 aN1 N2 aN2 ... NK aNK, where K is the number of nonzero terms in the polynomial, Ni and aNi (i=1, 2, ..., K) are the exponents and coefficients, respectively. It is given that 1 <= K <= 10£¬0 <= NK < ... < N2 < N1 <=1000.
 * 
 * Output
 * 
 * For each test case you should output the sum of A and B in one line, with the same format as the input. Notice that there must be NO extra space at the end of each line. Please be accurate to 1 decimal place.
 * 
 * Sample Input
 * 2 1 2.4 0 3.2
 * 2 2 1.5 1 0.5
 * Sample Output
 * 3 2 1.5 1 2.9 0 3.2
 *
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int na, nb;
	float a[1005]= {0}, b[1005] = {0}, c[1005]={0};
	int count = 0, n;

    //input polynomials	a,b
	cin >> na;
	for (int i=0; i!=na; ++i) 
	{
		cin >> n;
		cin >> a[n];
	}
	cin >> nb;
	for (int i=0; i!=nb; ++i) 
	{
		cin >> n; 
		cin >> b[n];
	}

	//count a+b have many item
	for (int i=0; i!=1005; ++i) 
	{
		c[i] = a[i] + b[i];
		if (c[i] != 0)
			++count;
	}
	cout << count;
	for (int i = 1004; i >= 0; --i)
	{
		if (c[i] != 0)
			cout << " " << i << " " 
			     << setiosflags(ios::fixed) << setprecision(1) << c[i]; 
	}
	cout << endl;
	return 0;
}