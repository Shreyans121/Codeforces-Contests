#include<bits/stdc++.h>
using namespace std;

int main() {
  long long int t;
  cin>>t;

  while(t--) {
    long long int n, k;
    cin>>n>>k;

    if(k == n-1) {
      if(n == 4) {
        long long int temp = -1;
        cout<<temp<<endl;
      }
      else {
        cout<<n-1<<" "<<n-2<<endl;
        cout<<"1"<<" "<<n-3<<endl;
        cout<<"0"<<" "<<2<<endl;

        for(long long int i = 3; i<n/2; i++) {
          if((i == k) or (i == n-k-1)) {
            continue;
          }
          else {
            cout<<i<<" "<<n-i-1<<endl;
          }
        }
      }
    }
    else {
      if(k != 0) {
        cout<<k<<" "<<n-1<<endl;
      }
      cout<<"0"<<" "<<n-k-1<<endl;

      for(long long int i = 1; i<n/2; i++) {
        if((i == k) or (i == n-k-1)) {
          continue;
        }
        else {
          cout<<i<<" "<<n-i-1<<endl;
        }
      }
    }
  }


  return 0;
}
