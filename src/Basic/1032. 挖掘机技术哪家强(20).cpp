#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int id, score;
		vector<int> vi(n + 1);

		for (int i = 0; i != n; ++i)
		{
			cin >> id >> score;
			vi[id] += score;
		}
		id = 1;
		score = vi[1];
		for (int i = 2; i <= n; ++i)
			if (vi[i] > score)
			{
				id = i;
				score = vi[i];
			}
		cout << id << " " << score << endl;
	}
	return 0;
}