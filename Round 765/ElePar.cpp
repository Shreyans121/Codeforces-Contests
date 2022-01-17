#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
  		vector<int> arr(n, 0);
  		for(int i=0;i<n;i++)
              cin>>arr[i];
  		unordered_map<int, vector<int>> hashmap;
  		for(int i = 0; i < n; i++) {
  			hashmap[arr[i]].push_back(i);
  		}

  		int ans = -1;
  		for(auto k: hashmap) {
  			if(k.second.size() == 1)
  				continue;
  			vector<int> a = k.second;
  			for(int i = 0; i < a.size() - 1; i++) {
  				int eval1 = a[i];
  				int eval2 = a[i+1];
  				ans = max(ans, eval1 - eval2 + int(arr.size()));
  			}
  		}
  		cout << ans <<endl;
    }
    return 0;
}
