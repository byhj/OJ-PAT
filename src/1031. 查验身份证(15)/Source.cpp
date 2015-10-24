#include <string>
#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
	int n;
	int weight[] ={ 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
	char arc[] ={ '1', '0' , 'X','9' ,'8' ,'7' ,'6' ,'5' ,'4' ,'3' ,'2' };

	while (cin >> n)
	{
		vector<string> ans;

		string str;
		int cnt = 0;
		while (n--)
		{
			cin >> str;
			int sum = 0;
			bool error = false;

			int i;
			for (i = 0; i < 17; ++i)
			{
				if (!isdigit(str[i]))
					break;
				sum += (str[i] - '0') * weight[i];
			}

			if (i < 17 || arc[sum % 11] != str[17])
				ans.push_back(str);
		}

		if (ans.size() == 0)
			cout << "All passed" << endl;
		else
		{
			for (auto str : ans)
				cout << str << endl;
		}

	}

	return 0;
}