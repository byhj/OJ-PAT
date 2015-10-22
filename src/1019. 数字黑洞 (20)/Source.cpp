#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	string str1, str2;
	int a, b, c;
	while (cin >> str1)
	{
	
		sort(str1.begin(), str1.end(), greater<char>() );
		a = stoi(str1);
		str2 = str1;
		sort(str2.begin(), str2.end());
		b =  stoi(str2);
		c = a - b;

		string str3 = to_string(c);
		if (str3.size() == 3)
			str3 = '0' + str3;

	     while (c != 6174)
		 {
			if (c == 0)
			{
				cout << str1 << " - " << str2 << " = 0000" << endl;
				break;
			}
			else
			{


				cout << str1 << " - " << str2 << " = " << str3 << endl;

				str1 = to_string(c);
				if (str1.size() == 3)
					str1 = '0' + str1;

				sort(str1.begin(), str1.end(), greater<char>());
				a = stoi(str1);
				str2 = str1;
				sort(str2.begin(), str2.end());
				b =  stoi(str2);
				c = a - b;

				str3 = to_string(c);
				if (str3.size() == 3)
					str3 = '0' + str3;
			}

		}

		if (c == 6174)
		   cout << str1 << " - " << str2 << " = " << str3 << endl;
	}

	return 0;
}