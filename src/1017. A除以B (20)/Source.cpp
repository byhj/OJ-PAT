#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int n = 0, m = 0;
	while (cin >> str >> n)
	{
		string ans;
		for (int i = 0; i != str.size(); )
		{
			m = str[i] - '0';

			if (m < n)
			{
				++i;
				m = m * 10 + str[i];
			}
			else
			{
				ans += (m / n + '0');
				m = m % n;
				++i;
			}
		}
		cout << ans << " " << m << endl;
	}
	return 0;
}