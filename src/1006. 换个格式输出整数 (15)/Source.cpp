#include <iostream>
#include <array>

using namespace std;

const int Size = 3;
int main()
{
	int n;
	while (cin >> n)
	{
		array<int, Size> arr;
		arr[0] = n % 10;
		arr[1] = (n % 100) / 10;
		arr[2] = n / 100;
		while (arr[2]--)
			cout << 'B';
		while (arr[1]--)
			cout << 'S';
		for (int i = 1; i <= arr[0]; ++i)
			cout << i;
		cout << endl;
	}
	return 0;
}
