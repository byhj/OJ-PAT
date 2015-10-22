#include <iostream>
#include <vector>

using namespace std;

bool prime(int n)
{
	int i;
	for (i = 2; i*i <= n; ++i)
		if (n % i == 0)
			return 0;

	return 1;
}

int main()
{
	int pm, pn;

	while (cin >> pm >> pn)
	{

		int i = 2;
		int j = 0;
		int t = 1;
		while (true)
		{
			if (prime(i))
			{
				++j;
				if (j>=pm && j <= pn)
				{
					if (t % 10 == 1)
						cout << i;
					else
						cout << " " << i;

					if (t++ % 10 == 0)
						cout << endl;
				}
				if (j == pn)
					break;
			}
			++i;
		}

	}
	return 0;
}