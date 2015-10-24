#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> ans;
		vector<int> v(n);
		vector<int> vt;

		for (int i = 0; i != n; ++i)
			cin >> v[i];
		vt = v;
		sort(vt.begin(), vt.end());

		long int maxx=-1;
		for (int i = 0; i != n; ++i)
		{
			if (v[i] >= maxx) maxx = v[i];
			if (v[i] == vt[i] && v[i] == maxx)
				ans.push_back(v[i]);
		}

		//print the ouput
		cout << ans.size() << endl;
		for (int i = 0; i < ans.size(); ++i)
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