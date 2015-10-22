#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> ans;
		vector<int> v(n);
		for (int i = 0; i != n; ++i)
			cin >> v[i];
		for (int i = 0; i != n; ++i)
		{
			int j, k;
			for (j = 0; j != i; ++j)
			{
				if (v[j] > v[i])
					break;
			}
			for (k = i + 1; k != n; ++k)
			{
				if (v[k] < v[i])
					break;
			}
			if (j == i && k == n)
				ans.push_back(v[i]);
		}
		cout << ans.size() << endl;
		for (int i = 0; i != ans.size(); ++i)
		{
			if (i == 0)
				cout << ans[i];
			else
				cout << " " << ans[i];
		}
		cout << endl;

	}
	return 0;
}