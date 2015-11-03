#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, p;
	while (cin >> n >> p)
	{
		vector<double> vi(n);
		for (int i = 0; i != n; ++i)
		  cin >> vi[i];
		  
		sort(vi.begin(), vi.end());
		
		int number = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = i+number-1; j < n; ++j)
			{
				if (vi[i] * p < vi[j])
				  break;
				if (j-i+1 > number)
				  number = j-i+1;
   			}
		}
		cout << number << endl;
	}
}
