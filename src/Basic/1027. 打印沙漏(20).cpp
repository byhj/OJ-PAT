#include <iostream>
#include <string>

using namespace std;

int main()
{
	//the i star number
	int num[1001] ={ 0 };
	for (int i = 1; i != 1001; ++i)
		num[i] = 2 * i * i - 1;

	int n;
	char ch;
	while (cin >> n >> ch)
	{
		int j = 1;
		while (num[j] <= n)
			++j;

		for (int i = 0, ix = j-1; ix >= 2; --ix, ++i)
		{
			string str(ix*2-1, ch);
			str = string(i, ' ') + str;
			cout << str << endl;
		}
		
		cout << string(j-2, ' ')  << ch << endl;

		for (int ix = 2, i = j-3; ix < j; ++ix, --i)
		{
			string str(ix*2-1, ch);
			str = string(i, ' ') + str;
			cout << str << endl;
		}

		cout << n - num[j-1] << endl;

	}

	return 0;
}