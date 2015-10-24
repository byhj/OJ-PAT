#include <iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int cnt = 0;
		while (n != 1)
		{
			//even number, /= 2;
			if (n % 2 == 0)
				n /= 2;
			else
				n = (3 * n + 1) / 2;
			++cnt;
		}
		cout << cnt << endl;
	}
	return 0;
}