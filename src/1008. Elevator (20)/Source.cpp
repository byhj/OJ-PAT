#include <iostream>


using namespace std;

int main(void)
{
	int n;
	while (cin >> n)
	{
		int t = 0;
		int ans = 0;
		int m = 0;
		while (n--)
		{
			cin >> m;
			if (m - t > 0)
				ans += (m - t) * 6;
			else
				ans += (m - t) * -4;
			ans += 5;
			t = m;
		}
		cout << ans << endl;

	}

	return 0;
}