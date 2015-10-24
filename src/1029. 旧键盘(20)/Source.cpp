#include <unordered_set>
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	string str1, str2;

	while (cin >> str1 >> str2)
	{
		unordered_set<char> mySet;
		int j = 0;
		char ans[100]={' '};
		int cnt = 0;
		for (int i = 0; i != str1.size(); ++i)
		{ 
			if (str1[i] == str2[j] && j < str2.size())
				++j;
			else
			{
				auto ch = str1[i];
				if (islower(ch))
					ch = toupper(ch);

				int t;
				for (t = 0; t < cnt; ++t)
					if (ch == ans[t])
						break;
				if (t == cnt)
				   ans[cnt++] = ch;
			}
		}
		cout << ans << endl;
	}
	return 0;
}