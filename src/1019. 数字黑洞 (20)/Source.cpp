#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	string str(4, '0');
	int a, b;
	cin >> a;
	int i = 3;
    
    //change number to string
	do {
		str[i] = a % 10 + '0';
		a /= 10;
		--i;
	} while (a);

	//str = reverse(str)
	if (str[0] == str[1] && str[1] == str[2] && str[2] == str[3])
		cout << str << " - " << str << " = 0000" << endl;
	else
	{
		//loop entil get the number 6767
		do
		{
			sort(str.begin(), str.end());
			a = stoi(str);
			string strRev(str.rbegin(), str.rend());
			b = stoi(strRev);

			string st(4, '0');
			int t = b - a;
			int i = 3;
			//Change the b - a result to string st
			do 
			{
				st[i] = t % 10 + '0';
				t /= 10;
				--i;
			} while (t);
			//output the equal

			cout << strRev << " - " << str << " = " << st << endl;
			str = st;
		} while (b - a != 6174);

	}
	return 0;
}