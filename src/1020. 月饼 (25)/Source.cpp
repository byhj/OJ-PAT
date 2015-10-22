#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>

using namespace std;

struct MoonCake
{
	double weight;
	double price;
};

bool comp(const MoonCake &lhs, const MoonCake &rhs)
{
	return lhs.price / lhs.weight > rhs.price / rhs.weight;
}

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		vector<MoonCake> vm(n);
		for (int i = 0; i != n; ++i)
			cin >> vm[i].weight;
		for (int i = 0; i != n; ++i)
			cin >> vm[i].price;

		sort(vm.begin(), vm.end(), comp);

		double ans = 0.0;
		int i = 0;

		//weight is maybe not enought
		while (i < vm.size())
		{
			if (m >= vm[i].weight)
			{
				ans += vm[i].price;
				m -= vm[i].weight;
				++i;
			}
			else
			{
				ans += (m / vm[i].weight) * vm[i].price;
				break;
			}
		}

		cout << setprecision(2) << fixed << ans << endl;
	}
}