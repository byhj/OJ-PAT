#include <unordered_map>
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

bool isWeek(char c)
{
	if (c >= 'A' && c <= 'G')
		return true;
	return false;
}

bool isHour(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'N'))
		return true;
	return false;
}
int main()
{
	unordered_map<char, string> myMap = { {'A', "MON"}, {'B', "TUE"}, 
	                                      {'C', "WED"}, {'D', "THU"},
	                                      {'E', "FRI"}, {'F', "SAT"}, 
									      {'G', "SUN"} };
	string s1, s2, s3, s4;

	while (cin >> s1 >> s2 >> s3 >> s4)
	{
		int i;
		//The first equal upper char
		for (i = 0; i < s1.size() && i < s2.size(); ++i)
		{
			if ( isWeek(s1[i]) && s1[i] == s2[i] )
			{
				cout << myMap[s1[i]] << " ";
				break;
			}

		}

	
		//the second equal char[0-9A-N] TO [0 - 23]
		for (++i; i < s1.size() && i < s2.size(); ++i)
		{
			if ( (s1[i] == s2[i]) && isHour(s1[i]) )
			{
				if (isdigit(s1[i]))
					cout << "0" << s1[i] << ":";
				else 
					cout << s1[i] - 'A' + 10 << ":";
				
				break;
			}
		}

		//the first equal char of the last two string
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