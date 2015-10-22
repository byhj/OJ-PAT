#include <string>
#include <iostream>

using namespace std;

int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		bool flag = false;
		if (str1.find('+') != string::npos)
			flag = true;

		string st = str2;
		for (int i = 0; i != str2.size(); ++i)
		{
			if (isalpha(st[i]))
				st[i] = toupper(st[i]);
			if (isalpha(str2[i]) && isupper(str2[i]) && flag)
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