#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

struct Student
{
	string id;
	string inTime;
	string outTime;
};

int main(void)
{
	int n;
	while (cin >> n)
	{
		vector<Student> vs(n);
		for (int i = 0; i != n; ++i)
			cin >> vs[i].id >> vs[i].inTime >> vs[i].outTime;

		string id1 = vs[0].id;
		string id2 = vs[0].id;
		string time1 = vs[0].inTime;
		string time2 = vs[0].outTime;
		for (int i = 0; i != n; ++i)
		{
			if (vs[i].inTime < time1)
			{
				time1 = vs[i].inTime;
				id1 = vs[i].id;
			}
			if (vs[i].outTime > time2)
			{
				time2 = vs[i].outTime;
				id2 = vs[i].id;
			}
		}
		cout << id1 << " " << id2 << endl;
	}

	return 0;
}