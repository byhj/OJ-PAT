#include <iostream>

using namespace std;

bool isPrime(int n)
{
	if (n < 2)
		return false;

	for (int i = 2; i*i <= n; ++i)
		if (n % i == 0)
			return false;

	return true;
}

int main()
{
	int n;

	while (cin >> n)
	{
		int t1 = 2;
		int t2 = 0;
		int cnt = 0;

		for (int i = 3; i <= n; ++i)
		{
			if (isPrime(i))
			{
				t1 = t2;
				t2 = i;
				if (t2 - t1 == 2)
					++cnt;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}