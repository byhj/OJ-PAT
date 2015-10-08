#include <iostream>
#include <string>

using namespace std;

struct  Student
{
	string name;
	string id;
	double score;
};

int main()
{
	int n;
	while (cin >> n)
	{
		Student stu, sMin, sMax;
		sMin.score = 101;
		sMax.score = -1;

		while (n--)
		{
			cin >> stu.name >> stu.id >> stu.score;
			if (stu.score > sMax.score)
				sMax = stu;
			if (stu.score < sMin.score)
				sMin = stu;
		}
		cout << sMax.name << " " << sMax.id << endl;
		cout << sMin.name << " " << sMin.id << endl;
	}
	return 0;
}