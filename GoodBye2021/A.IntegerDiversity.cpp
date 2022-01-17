#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    int n;
    cin>>n;
    vector<int> vec(n);
    unordered_map<int, int> mp;
    int cnt = 0;

    for(int i = 0; i<n; i++) {
      cin>>vec[i];
      vec[i] = abs(vec[i]);

      int maxi;
      if(vec[i] == 0) {
        maxi = 1;
      }
      else {
        maxi = 2;
      }
      if(mp[vec[i]] >= maxi) {
        continue;
      }
      mp[vec[i]] += 1;
      cnt += 1;
    }

    cout<<cnt<<endl;

  }
  return 0;
}
