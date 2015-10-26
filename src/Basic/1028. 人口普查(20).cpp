#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		string name, oldName, youngName;
		int y, m, d;
		int yt = 0, mt = 0, dt = 0;
		int yt1 = 10000, mt1 = 1000, dt1 = 1000;
		char ch;
		int cnt = 0;
		while (n--)
		{
			cin >> name >> y >> ch >> m >> ch >> d;
			int t = y * 12 * 30 + m * 30 + d;
			if (t <= 2014*30*12+9*30+6 && t >= 1814*30*12+9*30+6)
			{
				if (y > yt || (y == yt && m > mt) || ( y==yt && m == mt && d > dt) )
				{
					youngName = name;
					yt = y; mt = m; dt = d;
				}

				if (y < yt1 || (y == yt1 && m < mt1) || (y == yt1 && m == mt1 && d < dt1) )
				{
					oldName = name;
					yt1 = y; mt1 = m; dt1 = d;
				}
				++cnt;
			}
		}
		if (cnt != 0)
			cout << cnt << " " << oldName << " " << youngName << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}