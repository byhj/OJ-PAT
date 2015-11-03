 	

#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;

int main()
{
    char c, ch;
     string s;
     cin >> s;
     c = s[0];
     int pos = s.find('E');
     string st(s.begin()+1, s.begin()+pos);
     ch = s[pos+1];
     string se(s.begin()+pos+2, s.end());
     int t = 1, a = 0;
     for (int i=se.size()-1; i>=0; --i) {
         a += (se[i]-'0')*t; 
         t *= 10;
     }
     int b = st.find('.');
     if (ch == '+') {
            if ( b == -1)
               st.insert(st.begin(), a, 0);
            else {
            int c = st.size()-b-1;
             if (a >= c) {
              st.erase(st.begin()+b);
        st.insert(st.end(), a-c, '0');
        }
        else {
            st.erase(st.begin()+b);
             st.insert(st.begin()+b+a, '.');
        }
     }
     }
     
     else {
       if ( b == -1) {
         if (a >= st.size()) {
        st.insert(st.begin(), a-st.size(), '0');
        st.insert(st.begin(), '.');
        st.insert(st.begin(), '0');
        }
        else 
         st.insert(st.begin()+st.size()-a, '.');
        }
            else {
        if (a >= b) {
        st.erase(st.begin()+b);
        st.insert(st.begin(), a-b, '0');
        st.insert(st.begin(), '.');
        st.insert(st.begin(), '0');
        }
        else {
        st.erase(st.begin()+b);
             st.insert(st.begin()+b-a, '.');
        }
       }
     }
    if (c == '-')
      cout << c << st << endl;
     else 
      cout << st << endl;
    system("pause");
    return 0;
}
    

