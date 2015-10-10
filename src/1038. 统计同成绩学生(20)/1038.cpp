#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	int n, m;
	while (cin >> n)
	{
		unordered_map<int, int> scMap;
		while (n--)
		{
			int score;
			cin >> score;
			++scMap[score];
		}
		cin >> m;
		for (int i = 0; i != m; ++i)
		{
			int score;
			cin >> score;
			if (i != m - 1)
				cout << scMap[score] << " ";
			else
				cout << scMap[score] << endl;
		}

	}
	return 0;
}