#include <iostream>
#include <vector>

using namespace std;

const int NumSize = 10;

int main()
{
	vector<int> vi(NumSize);

	for (int i = 0; i != NumSize; ++i)
		cin >> vi[i];

	for (int i = 1; i != NumSize; ++i)
	{
		if (vi[i] != 0)
		{
			cout << i;
			--vi[i];
			break;
		}
	}
	for (int i = 0; i != NumSize; ++i)
		for (int j = 0; j != vi[i]; ++j)
			cout << i;
	
	cout << endl;

	return 0;
}