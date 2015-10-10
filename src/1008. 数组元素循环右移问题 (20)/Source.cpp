#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		vector<int> vi(n);
		for (int i = 0; i != n; ++i)
			cin >> vi[i];

		rotate(vi.begin(), vi.begin() + n - m, vi.end());

		for (int i = 0; i != n; ++i)
			if (i != n - 1)
				cout << vi[i] << " ";
			else
				cout << vi[i] << endl;


	}
	return 0;

}