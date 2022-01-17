#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    int n, m;
    cin>>n>>m;

    string remember;
    vector<string> nums(n);

    for(int i = 0; i<n; i++) {
      cin>>nums[i];
    }

    cin>>remember;

    int rptr = 0;

    for(int i = 1; i<=n; i++) {
      for(int j = 0; j<m; j++) {
        while(remember[rptr] == nums[i][j]) {
          rptr++;
          j++;
        }
      }
    }
  }


  return 0;
}
