#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Student
{
	int id;
	int d;
	int c;

};



bool comp(const Student & lhs, const Student & rhs)
{
	if (lhs.d + lhs.c != rhs.d + rhs.c)
		return lhs.d + lhs.c > rhs.d + rhs.c;
	else if (lhs.d == rhs.d)
		return lhs.id < rhs.id;
	else
		return lhs.d > rhs.d;
}

int main()
{
	int n;
	int a, b;
	while (scanf("%d%d%d", &n, &a, &b) != EOF)
	{
		vector<Student> vStu[4];
		Student stu;
		int cnt = 0;

		while (n--)
		{
			scanf("%d%d%d", &stu.id, &stu.d, &stu.c);
			if (stu.d >= a && stu.c >= a)
			{
				if (stu.d >= b && stu.c >= b)
					vStu[0].push_back(stu);
				else if (stu.d >= b && stu.c < b)
					vStu[1].push_back(stu);
				else if (stu.d < b && stu.c < b && stu.d >= stu.c)
					vStu[2].push_back(stu);
				else
					vStu[3].push_back(stu);
				++cnt;
			}
		}
		for (int i = 0; i != 4; ++i)
		  sort(vStu[i].begin(), vStu[i].end(), comp);

	    printf("%d\n", cnt);
		for (int i = 0; i != 4; ++i)
		  for (auto val : vStu[i])
			  printf("%d %d %d\n", val.id ,val.d , val.c);

	}

}