#include <iostream>
#include <vector>
#include <unordered_set>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	while (cin >> n)
	{
		vector<int> ans;
		unordered_set<int> mySet;
		int *pa = new int[n + 1];

		//store the (3n+1) problem numbers
		for (int i = 0; i != n; ++i)
		{
			cin >> pa[i];
			int m = pa[i];

			while (m != 1)
			{
				if (m % 2 == 0)
					m /= 2;
				else
					m = (3 * m + 1) / 2;
				mySet.insert(m);
			}
		}
		//Check ths number if already cover
			for (int i = 0; i != n; ++i)
			{
				if (mySet.find(pa[i]) == mySet.end())
					ans.push_back(pa[i]);
			}

			//Print ouput
			sort(ans.begin(), ans.end(), greater<int>());
			for (int i = 0; i != ans.size(); ++i)
				if (i != ans.size() - 1)
					cout << ans[i] << " ";
				else
					cout << ans[i] << endl;
	}
	return 0;
}