#include <iostream>
#include <vector>

using namespace std;

int main()
{

	int n;
	char c1, c2;
	while (cin >> n)
	{
		vector<int> v1(3);
		vector<int> a1(3);
		vector<int> a2(3);

		while (n--)
		{
			cin >> c1 >> c2;
			if (c1 == c2)
				++v1[1];

			if (c1 == 'B' && c2 == 'C')
			{
				++a1[0];
				++v1[0];
			}
			if (c1 == 'C' && c2 == 'J')
			{
				++a1[1];
				++v1[0];
			}
			if (c1 == 'J' && c2 == 'B')
			{
				++a1[2];
				++v1[0];
			}

			if (c1 == 'C' && c2 == 'B')
			{
				++a2[0];
				++v1[2];
			}
			if (c1 == 'J' && c2 == 'C')
			{
				++a2[1];
				++v1[2];
			}
			if (c1 == 'B' && c2 == 'J')
			{
				++a2[2];
				++v1[2];
			}

		}
		cout << v1[0] << " " << v1[1] << " " << v1[2] << endl;
		cout << v1[2] << " " << v1[1] << " " << v1[0] << endl;
		
		int t1 = 0, t2 = 0;
		int i1 = 0, i2 = 0;
		for (int i = 0; i != 3; ++i)
		{
			if (a1[i] > i1)
			{
				i1 = a1[i];
				t1 = i;
			}
			if (a2[i] > i2)
			{
				i2 = a2[i];
				t2 = i;
			}

		}
		if (t1 == 0)
			cout << 'B';
		if (t1 == 1)
			cout << 'C';
		if (t1 == 2)
			cout << 'J';
		cout << " ";
		if (t2 == 0)
			cout << 'B';
		if (t2 == 1)
			cout << 'C';
		if (t2 == 2)
			cout << 'J';
	}

	return 0;
}