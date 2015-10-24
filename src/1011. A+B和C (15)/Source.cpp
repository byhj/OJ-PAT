#include <iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		long long a, b, c;
		for (int i = 1; i <= n; ++i)
		{
			cin >> a >> b >> c;
			cout << "Case #" << i << ": ";
			cout << (a + b > c ? "true" : "false") << endl;
		}
	}
	return 0;
}