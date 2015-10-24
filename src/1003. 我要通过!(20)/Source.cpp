#include <string>
#include <iostream>

using namespace std;

bool patTest(const string &str)
{
	//Rule one, PAT
	auto idx = str.find_first_not_of('A');
	if (idx == string::npos || str[idx] != 'P')
		return false;

	//PT not A, not find, not T
	auto t = str.find_first_not_of('A', idx + 1);
	if (t == idx + 1 || t = string::npos || str[t] != 'T')
		return false;

}

int main()
{
	int n;
	string str;
	while (cin >> n)
	{
		while (n--)
		{
			cin >> str;
			if (patTest(str))
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}

	return 0;
}