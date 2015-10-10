#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string line;
	while (getline(cin, line))
	{
		vector<string> vs;

		istringstream iss(line);
		string word;
		while (iss >> word)
			vs.push_back(word);
		for (int i = vs.size() - 1; i >= 0; --i)
		{
			if (i != 0)
				cout << vs[i] << " ";
			else
				cout << vs[i] << endl;
		}

	}
	return 0;
}