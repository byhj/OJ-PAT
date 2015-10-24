#include <string>
#include <iostream>

using namespace std;

int main()
{
	string str1, str2;
	while (getline(cin, str1) && getline(cin, str2) )
	{
		//str1 maybe empty
		if (str1.empty())
		{
			cout << str2 << endl;
			continue;
		}

		bool flag = false;
		if (str1.find_first_of('+') != string::npos)
			flag = true;

		string st = str2;
		for (int i = 0; i != str2.size(); ++i)
		{
			if (isalpha(st[i]))
				st[i] = toupper(st[i]);
			if (isupper(str2[i]) && flag)
                continue;
			else
			{ 
				if (str1.find(st[i]) == string::npos)
					cout << str2[i];
			}
		}
		cout << endl;
	}
	return 0;
}