#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str;

	while (cin >> str)
	{
		int nT = 0;
		int nAT = 0;
		int nPAT = 0;
        for (int i = str.length()-1; i >= 0; --i)
        {
        	if (str[i] == 'T')
        	  ++nT;
        	else if (str[i] == 'A')
        	  nAT = (nAT + nT) % 1000000007;
        	else
        	  nPAT = (nPAT + nAT) % 1000000007;
		}
		cout << nPAT << endl;
	}
	return 0;
}
