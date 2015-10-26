#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void)
{
	string st;
	map<int, string> isMap;
	isMap[0] = "zero";
	isMap[1] = "one";   isMap[2] = "two";   isMap[3] = "three";
	isMap[4] = "four";  isMap[5] = "five";  isMap[6] = "six";
	isMap[7] = "seven"; isMap[8] = "eight"; isMap[9] = "nine";

	while (cin >> st)
	{
		int sum = 0;
		for (auto c : st)
			sum += c - '0';
		string temp = to_string(sum);
		for (int i = 0; i < temp.size(); ++i)
		{
			if (i == temp.size() - 1)
				cout << isMap[temp[i] - '0'] << endl;
			else
				cout << isMap[temp[i] - '0'] << " ";
		}
	}
	return 0;
}