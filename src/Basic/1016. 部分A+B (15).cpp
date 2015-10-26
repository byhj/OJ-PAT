#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;
	char da, db;
	while (cin >> a >> da >> b >> db)
	{
		int sum = 0;
		int t = 1;
		for (const auto &c : a)
		{
			if (c == da)
			{
				sum += t * (da - '0');
				t *= 10;
			}
		}

		t = 1;
		for (const auto &c : b)
		{
			if (c == db)
			{
				sum += t * (db - '0');
				t *= 10;
			}
		}

		cout << sum << endl;
	}

	return 0;
}