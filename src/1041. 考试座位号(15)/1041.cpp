#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

struct Student
{
	string id;
	int tx;
	int rx;
};

int main()
{
	int n, m;
	while (cin >> n)
	{
		unordered_map<int, Student> isMap;

		while (n--)
		{
			Student stu;
			cin >> stu.id >> stu.tx >> stu.rx;
			isMap[stu.tx] = stu;
		}
		while (cin >> m)
		{
			int ix;
			while (m--)
			{
				cin >> ix;
				Student stu = isMap[ix];
				cout << stu.id << " " << stu.rx << endl;
			}
		}
	}
	return 0;
}