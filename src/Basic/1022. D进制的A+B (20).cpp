#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b, d;
	while (cin >> a >> b >> d)
	{
		int c = a + b;
		string ans;
		do
		{
			ans = static_cast<char>( (c % d) + '0') + ans;
			c /= d;
		} while (c != 0);

		cout << ans << endl;
	}

	return 0;
}