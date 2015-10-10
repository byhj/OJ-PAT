#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	vector<int> vRatio, vExp;
	while (cin >> n >> m)
	{
		if (m != 0)
		{ 
			vRatio.push_back(n * m);
			vExp.push_back(m - 1);
		}

	}
	for (int i = 0; i != vRatio.size(); ++i)
	{
		if (i != vRatio.size() - 1)
			cout << vRatio[i] << " " << vExp[i] << " ";
		else
			cout << vRatio[i] << " " << vExp[i] << endl;
	}
	if (vRatio.empty())
		cout << "0 0" << endl;

	return 0;
}