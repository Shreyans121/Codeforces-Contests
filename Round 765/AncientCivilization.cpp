#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,l;
        cin>>n>>l;

        vector<int> arr;
        vector<string> str;

        for(int i=0;i<n;i++) {
            int temp;
            cin>>temp;
            arr.push_back(temp);

            string st="";
            for (int i = 31; i >= 0; i--) {
                int k = temp >> i;
                if (k & 1)
                    st +='1';
                else
                    st +='0';
            }

            if(st.length() == l)
                str.push_back(st);
            else
            {
                int m = st.length();
                while(m<l)
                {
                    st = '0'+st;
                    m++;
                }
                str.push_back(st);
            }
        }

        string ans="";
        int one=0;
        int zero=0;

        for(int i=0;i<32;i++) {
            for(int j=0;j<n;j++) {
                if(str[j][i] == '0')
                    zero++;
                else
                    one++;
            }

            if(one>zero)
                ans += '1';
            else
                ans +='0';

            one=0;
            zero=0;
        }

        int res = 0;
        int base = 1;

        int len = ans.length();

        for (int i = len - 1; i >= 0; i--) {
            if (ans[i] == '1')
                res += base;
            base = base * 2;
        }

        cout<<res<<endl;
    }
}
