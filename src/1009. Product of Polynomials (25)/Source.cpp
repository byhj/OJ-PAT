
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

const int MAX_SIZE = 1000 + 5;

int main(void)
{
	int ka, kb;
	int n;
	vector<double> va(MAX_SIZE), vb(MAX_SIZE), vc(MAX_SIZE * 2);
	cin >> ka;
	for (int i = 0; i < ka; ++i)
	{
		cin >> n;
		cin >> va[n];
	}
	cin >> kb;
	for (int i = 0; i < kb; ++i)
	{
		cin >> n;
		cin >> vb[n];
	}

	for (int i = 0; i != MAX_SIZE; ++i)
		for (int j = 0; j != MAX_SIZE; ++j)
		   vc[i+j] += va[i] * vb[j];

	int cnt = 0;
	for (int i = MAX_SIZE * 2 - 1; i >= 0; --i)
		if (vc[i] != 0)
			++cnt;
	//print
	cout << cnt;
	for (int i = MAX_SIZE*2 - 1; i >= 0; --i)
		if (vc[i] != 0)
			cout << " " << i << " " << setprecision(1) << fixed << vc[i];
	cout << endl;

	return 0;
}