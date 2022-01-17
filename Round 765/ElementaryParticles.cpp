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
    unordered_map<int, int> occ;
    unordered_map<int, pair<int, int>> mp;
    int temp;

    for(int i = 1; i<=n; i++) {
      cin>>temp;
      // st.insert(temp);
      if(occ[temp] == 0) {
        occ[temp] = i;
        // mp[temp] = make_pair(i, -1);
      }
      else if(occ[temp] != -1) {
        int j = occ[temp];
        mp[temp] = make_pair(j, i);
        occ[temp] = -1;
      }
    }

    int ans = -1;

    if(mp.size() == 0) {
      cout<<"-1\n";
      continue;
    }

    for(auto ele: mp) {
      int i = (ele.second).first;
      int j = (ele.second).second;
      int temp = i + (n-j);
      ans = (temp > ans) ? (temp) : (ans);
    }

    cout<<ans<<endl;
  }


  return 0;
}
