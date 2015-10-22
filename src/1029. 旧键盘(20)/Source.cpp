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
		auto iter = str1.find_first_not_of(str2);

		while (iter != string::npos)
		{
			char  ch = 	str1[iter];
			if (isalpha(ch))
				ch = toupper(ch);
			mySet.insert(ch);
			iter = str1.find_first_not_of(str2, iter+1);
		}
		for (auto c : mySet)
			cout << c;
		cout << endl;
	}
	return 0;
}