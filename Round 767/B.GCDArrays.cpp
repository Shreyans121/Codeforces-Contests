#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    int l, r, k;
    cin>>l>>r>>k;

    int n = r-l+1;

    if(k == 0) {
      if(l == r and l != 1) {
        cout<<"YES"<<endl;
      }
      else {
        cout<<"NO"<<endl;
      }
    }
    else {
      if(l % 2 == 0) {
        if(k >= n/2) {
          cout<<"YES"<<endl;
        }
        else {
          cout<<"NO"<<endl;
        }
      }
      else {
        if(n % 2 != 0) {
          if(k >= (n/2)+1) {
            cout<<"YES"<<endl;
          }
          else {
            cout<<"NO"<<endl;
          }
        }
        else {
          if(k >= n/2) {
            cout<<"YES"<<endl;
          }
          else {
            cout<<"NO"<<endl;
          }
        }
      }
    }


  }


  return 0;
}
