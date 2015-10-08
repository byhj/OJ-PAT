#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	string str; 
	unordered_map<int, char> icMap ={ {0,'P'}, {1, 'A'}, {2, 'T'}, {3, 'e'},  {4, 's'}, {5, 't'} };

	while (cin >> str)
	{
		int num[7] ={ 0 };
		for (const auto &c : str)
		{
			switch (c)
			{
			   case 'P': ++num[0]; break;
			   case 'A': ++num[1]; break;
			   case 'T': ++num[2]; break;
			   case 'e': ++num[3]; break;
			   case 's': ++num[4]; break;
			   case 't': ++num[5]; break;
			   default: break;
			}
		}
		while (num[0] != 0 || num[1] != 0 || num[2] != 0
			|| num[3] != 0 || num[4] != 0 || num[5] != 0)
		{
			for (int i = 0; i != 6; ++i)
			{
				if (num[i] > 0)
				{
					cout << icMap[i];
					--num[i];
				}
			}
		}
		cout << endl;
	}

	
	return 0;
}