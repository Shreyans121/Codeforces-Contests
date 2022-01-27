#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    int n;
    cin>>n;

    vector<int> arr(n+1);
    unordered_map<int, int> mp;

    for(int i = 1; i<=n; i++) {
      cin>>arr[i];
      mp[arr[i]]++;
    }

    int cnt = 0;
    int i = n;
    while(i>0) {
      if(arr[i] != arr[n]) {
        int fwd = n-i;

        i = i - fwd;
        cnt++;
      }
      else {
        i--;
      }
    }
    cout<<cnt<<endl;
  }


  return 0;
}
