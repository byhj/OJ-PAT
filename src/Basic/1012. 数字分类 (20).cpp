#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	int m, n;
	vector<int> vi(5);
	vector<int> vn(5);
	int t = 1;

	while (cin >> m)
	{
		while (m--)
		{
		    	cin >> n;
		    //Type one, all even number can divied 5
		    if (n % 10 == 0)
		    {
		    	vi[0] += n;
		    	++vn[0];
		    }
		    
		    //type two
		    if (n % 5 == 1)
		    {
		    	vi[1] += t * n;
		    	t = -t;
		    	++vn[1];
		    }
		    
		    //type three
		    if (n % 5 == 2)
		    {
		    	++vi[2];
		    	++vn[2];
		    }
		    
		    //type four
		    if (n % 5 == 3)
		    {
		    	vi[3] += n;
		    	++vn[3];
		    }
		    
		    //type five
		    if (n % 5 == 4)
		    {
		    	++vn[4];
		    	if (n > vi[4])
		    		vi[4] = n;
		    
		    }
		}
	    //Output the answer
	    if (vn[0] == 0)
	    	cout << "N" << " ";
	    else
	    	cout << vi[0] << " ";
        
	    if (vn[1] == 0)
	    	cout << "N" << " ";
	    else
	    	cout << vi[1] << " ";
        
	    if (vn[2] == 0)
	    	cout << "N" << " ";
	    else
	    	cout << vi[2] << " ";
        
	    if (vi[3] == 0)
	    	cout << "N" << " ";
	    else
	    	cout << setprecision(1) << fixed << vi[3] / static_cast<float>(vn[3]) << " ";
        
	    if (vn[4] == 0)
	    	cout << "N" << endl;
	    else
	    	cout << vi[4] << endl;
        
	    }
          

	return 0;
}