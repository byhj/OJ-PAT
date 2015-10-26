#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str;

	while (cin >> str)
	{
		long long num[3] ={ 0 };
		for (const auto &c : str)
		{
			switch (c)
			{
			case 'P': ++num[0]; break;
			case 'A': ++num[1]; break;
			case 'T': ++num[2]; break;
			default: break;
			}
		}
		long long ans = max(max(num[0], num[1]), num[2]) % 1000000007;
		cout << ans << endl;
	}


	return 0;
}