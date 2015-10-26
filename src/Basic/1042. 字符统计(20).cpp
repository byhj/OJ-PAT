#include <string>
#include <iomanip>
#include <iostream>
#include <map>

using namespace std;

int main()
{
	string str;
	while (getline(cin, str))
	{
		map<char, int> ciMap;
		for (const auto &c : str)
		{
			if (isalpha(c))
			   ++ciMap[tolower(c)];
		}
		char c;
		int cnt = 0;
		for (auto iter = ciMap.begin(); iter != ciMap.end(); ++iter)
			if (iter->second > cnt)
			{
				c = iter->first;
				cnt = iter->second;
			}
		cout << c << " " << cnt << endl;
	}

	return 0;
}