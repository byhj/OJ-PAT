#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector<int> vi(5);

	int t = 1;
	int n3 = 0;
	while (cin >> n)
	{
		if (n % 10 == 0)
			vi[0] += n;
		if (n % 5 == 1)
		{
			vi[1] += t * n;
			t = -t;
		}
		if (n % 5 == 2)
			++vi[2];
		if (n % 5 == 3)
		{
			vi[3] += n;
			++n3;
		}
		if (n % 5 == 4)
		{
			if (n > vi[4])
				vi[4] = n;
		}
	}

	if (vi[0] != 0)
		cout << vi[0];
	else
		cout << " ";

	if (vi[1] != 0)
}