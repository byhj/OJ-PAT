#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

struct Node
{
	string add;
	int val;
	string next;
};

int main()
{
	string add;
	int n, k;
	while (cin >> add >> n >> k)
	{
		unordered_map<string, Node> myNode;
		vector<Node> vn;

		while (n--)
		{
			Node node;
			cin >> node.add >> node.val >> node.next;
			myNode.insert(make_pair(node.add, node));
		}
		while (add != "-1")
		{
			vn.push_back(myNode[add]);
			add = myNode[add].next;
		}

		for (int i = 0; i < vn.size(); i += k)
			for (int j = k; j >= 0; --j)
			cout << vn[j+i].add << " " << vn[i+j].val << " " << vn[i+j].next << endl;

	}
	return 0;
}