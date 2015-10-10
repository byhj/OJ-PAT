#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num[1001] ={ 0 };
	for (int i = 1; i != 1001; ++i)
		num[i] = 2 * i * i - 1;
	int n;
	while (cin >> n)
	{
		int j = 1;
		while (num[j] < n)
			++j;
		for (int ix = j; ix >= 2; --ix)
		{
			string str(ix, '*');
			cout << str << endl;
		}
		cout << '*' << endl;

		for (int ix = 2; ix <= j; ++ix)
		{
			string str(ix, '*');
			cout << str << endl;
		}

		cout << n - num[j-1] << endl;

	}

	return 0;
}