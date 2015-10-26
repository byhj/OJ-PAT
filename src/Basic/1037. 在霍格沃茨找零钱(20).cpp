#include <iostream>

using namespace std;

int main()
{
	char dot;
	int ga, sa, ka;
	int gb, sb, kb;
	while (cin >> ga >> dot >> sa >> dot >> ka)
	{
		cin >> gb >> dot >> sb >> dot >> kb;
		int suma = ga * 17 * 29 + sa * 29 + ka;
		int sumb = gb * 17 * 29 + sb * 29 + kb;
		if (suma <= sumb)
		{
			int t = sumb - suma;
			cout << t / 17 / 29 << "." << (t % (17*29)) / 29 << "." << t % 29 << endl;
		}
		else
		{
			int t = suma - sumb;
			cout << "-" << t / 17 / 29 << "." << (t % (17*29)) / 29 << "." << t % 29 << endl;
		}

	}
	return 0;
}