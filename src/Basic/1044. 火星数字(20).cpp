#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

static const int Base = 13;


string stra[13] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec" };  
string strb[13] = {"","tam", "hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};  


string earthToMars(int n)
{
 	 string ans;
     int a = n / 13;
     int b = n % 13;
	 if (a > 0)
     {
     	ans += strb[a];
     	//is b  % 13 =0 we not output the "tret"
     	if (b == 0)
     	   return ans;
     	else
     	   ans += " ";
     }
     ans += stra[b];
     
	 return ans;
}

int marsToEarth(string str)
{
	int ans = 0;
    istringstream iss(str);
    string st;
    
    //notice the tam is 13, 13 is not "tam tret"
    while (iss >> st)
    {
    	for (int i = 1; i < 13; ++i)
    	{
    		if (strb[i] == st)
	           ans += i * 13;
		}
		for (int i = 0; i < 13; ++i)
		{
			if (stra[i] == st)
			   ans += i;
		}
    }
    
    return ans;  
}

int main()
{

	int n;
	while (cin >> n)
	{
		cin.get();
		while (n--)
		{
			string str;
			getline(cin, str);
	
			//Check str if a number on earth
			bool isNumFlag = false;
             if (str.find_first_of("0123456789") != string::npos)
			     isNumFlag = true;

			if (isNumFlag)
                cout << earthToMars(stoi(str)) << endl;
            else
                cout << marsToEarth(str) << endl;
		}
	}
	return 0;
}
