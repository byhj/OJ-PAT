#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int n;
	char ch;
	while (cin >> n >> ch)
	{
		string s1(n, ch);
		string s2(n, ' ');
		s2[0] = ch; s2[s2.size() - 1] = ch;

		cout << s1 << endl;

		int cnt = (n % 2 == 0) ? n * 0.5 : n *0.5 + 1;
		for (int i = 0; i != cnt-2; ++i)
			cout << s2 << endl;

		cout << s1 << endl;

	}
	return 0;
}