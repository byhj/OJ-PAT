#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <iomanip>
#include <sstream>

using namespace std;

static const int Base = 13;

int main()
{
	unordered_map<string, int> mysi1 ={ {"tret", 0}, {"jan", 1}, {"feb", 2}, {"mar", 3}, {"apr", 4}, {"may", 5}, {"jun", 6},
										{"jly", 7}, {"aug", 8}, {"sep", 9}, {"oct", 10}, {"nov", 11}, {"dec", 12} };
	unordered_map<string, int> mysi2 ={ {"tam", 1}, {"hel", 2}, {"maa", 3}, {"huh", 4}, {"tou", 5}, {"kes", 6},
	                                    {"hei", 7}, {"elo", 8}, {"syy", 9}, {"lok", 10}, {"mer", 11}, {"jou", 12} };
	
	unordered_map<int, string> myis1 ={ {0, "tret"}, {1, "jan"}, {2, "feb"}, {3, "mar"}, {4, "apr"}, {5, "may"}, {6, "jun"},
	                                    {7, "jly"}, {8, "aug"}, {9, "sep"}, {10, "oct"}, {11, "nov"}, {12, "dec"} };
	unordered_map<int, string> myis2 ={ {1, "tam"}, {2, "hel"}, {3, "maa"}, {4, "huh"}, {5, "tou"}, {6, "kes"},
	                                    {7, "hei"}, {8, "elo"}, {9, "syy"}, {10, "lok"}, {11,  "mer"}, {12, "jou"} };

	int n;
	while (cin >> n)
	{
		while (n--)
		{	
			cin.clear();
			string str;
			getline(cin, str);

			//Check str if a number on earth
			bool isNumFlag = true;
			for (const auto &c : str)
				if (isdigit(c) == false)
				{
					isNumFlag = false;
					break;
				}
			///////////////////////////////////////////////////
			if (isNumFlag)
			{ 
			    int t = stoi(str);
			    string ans;
			    if (t > 12)
			    {
			    	ans = myis2[t / 13] + " ";
			    	ans += myis1[t % 13];
			    }
			    else
			    	ans = myis1[t];
				cout << ans << endl;
			}
			else
			{   
				string ans;
				vector<string> vs;
				istringstream iss(str);
				string st;
				while (iss >> st)
					vs.push_back(st);
				if (vs.size() == 1)
					ans = mysi1[vs[0]];
				else
				{
					int sum = 0;
					sum += mysi1[vs[1]];
					sum += Base * mysi2[vs[0]];
					ans = to_string(sum);
				}
					cout << ans << endl;
			} 
		}
	}
	return 0;
}