#include <iostream>
#include <iomanip>

using namespace std;

const int CLK = 100;

int main()
{
	int c1, c2;
	while (cin >> c1 >> c2)
	{
		int c3 = (c2 - c1) / CLK;
		double ct = (c2 - c1) / 100.0;
		if (ct - c3 >= 0.5)
			++c3;
		cout << setw(2) << setfill('0') << c3 / 3600;
		cout << ":" << setw(2) << setfill('0') << (c3 % 3600) / 60;
		cout << ":" << setw(2) << setfill('0') << c3 % 60 << endl;
	}

	return 0;
}