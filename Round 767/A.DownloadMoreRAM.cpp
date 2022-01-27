#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    int n, k;
    cin>>n>>k;

    vector<int> temp(n);
    vector<int> perm(n);

    vector<pair<int, int>> mem(n);

    for(int i = 0; i<n; i++) {
      cin>>temp[i];
    }

    for(int i = 0; i<n; i++) {
      cin>>perm[i];
    }

    for(int i = 0; i<n; i++) {
      mem[i] = make_pair(temp[i], perm[i]);
    }

    sort(mem.begin(), mem.end());

    for(int i = 0; i<n; i++) {
      if(mem[i].first <= k) {
        k += mem[i].second;
      }
      else {
        break;
      }
    }

    cout<<k<<endl;

  }


  return 0;
}
