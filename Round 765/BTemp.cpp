#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    int n;
    cin>>n;

    // unordered_set<int> st;
    unordered_map<int, vector<int>> mp;
    int temp;

    for(int i = 1; i<=n; i++) {
      cin>>temp;
      mp[temp].push_back(i);
    }

    int ans = -1;

    for(auto ele: mp) {
      if(ele.second.size() == 1) {
        continue;
      }

      vector<int> vec = ele.second;

      for(int i = 0; i < vec.size() - 1; i++) {
        int j = vec[i];
        int k = vec[i+1];
        ans = max(ans, j + n - k);
      }
    }

    cout<<ans<<endl;
  }


  return 0;
}
