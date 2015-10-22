#include <unordered_map>
#include <string>
#include <iostream>
#include <cctype>

using namespace std;


int main()
{
	unordered_map<char, string> myMap = { {'A', "MON"}, {'B', "TUE"}, {'C', "WED"}, {'D', "THU"},
	                                   {'E', "FRI"}, {'F', "SAT"}, {'G', "SUN"} };
	string s1, s2, s3, s4;

	while (cin >> s1 >> s2 >> s3 >> s4)
	{
		int t = 0;
		for (int i = 0; i < s1.size() && i < s2.size(); ++i)
		{
			if (isupper(s1[i]) && s1[i] == s2[i])
			{
				cout << myMap[s1[i]] << " ";
				t = i;
				break;
			}

		}

		for (int i = t+1; i < s1.size() && i < s2.size(); ++i)
		{
			if (s1[i] == s2[i])
			{
				if (isdigit(s1[i]))
					cout << "0" << s1[i] << ":";
				else if (isalpha(s1[i]) && isupper(s1[i]) && s1[i] <= 'N')
					cout << s1[i] - 'A' + 10 << ":";
				
				break;
			}
		}
		for (int i = 0; i < s3.size() && i < s4.size(); ++i)
		{
			if (isalpha(s3[i]) && s3[i] == s4[i])
			{
				if (i < 10)
					cout << "0";
				cout << i << endl;
				
				break;
			}
		}
	}
	return 0;
}