#include <string>
#include <iostream>

using namespace std;

int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		int t = 0;
		bool flag = true;

		for (int i = 0; i != str2.size(); ++i)
		{
			auto iter = str1.find(str2[i]);
			if (iter != string::npos)
			{
				str1.erase(str1.begin() + iter);
				++t;
			}
			else
				flag = false;
		}
		if (flag)
			cout << "Yes" << " " << str1.size() << endl;
		else
			cout << "No" <<  " " << str2.size()- t << endl;

	}
	return 0;
}