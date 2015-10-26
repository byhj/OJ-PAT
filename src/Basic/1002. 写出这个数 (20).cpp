#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

int main()
{
	unordered_map<int, string> isMap ={ {0, "ling"}, {1, "yi"}, {2, "er"}, {3, "san"}, {4, "si"}, 
	                                    {5, "wu"}, {6, "liu"}, {7, "qi"}, {8, "ba"}, {9, "jiu"} };

	string str;
	while (cin >> str)
	{
		//add the str number
		int sum = 0;
		for (const auto &c : str)
			sum += c - '0';
		string temp = to_string(sum);

		//Change the number to pingyin
		for (int i = 0; i != temp.size(); ++i)
		{
			if (i != temp.size() - 1)
				cout << isMap[temp[i] - '0'] << " ";
			else
				cout << isMap[temp[i] - '0'] << endl;
		}

	}
	return 0;

}