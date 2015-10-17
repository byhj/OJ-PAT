#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string str;
	while (cin >> str)
	{
		vector<int> vi(10);
		for (const auto &c : str)
			++vi[c - '0'];

		for (int i = 0; i != vi.size(); ++i)
			if (vi[i] != 0)
				cout << i << ":" << vi[i] << endl;
	}
	return 0;
}