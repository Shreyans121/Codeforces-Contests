#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int> x, vector<int> y) {
  return x[1] < y[1];
}

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    int n;
    string str;
    cin>>n;

    vector<vector<int>> a(n, vector<int>(2));

    for(int i = 0; i<n; i++) {
      cin>>a[i][0];
    }

    cin>>str;

    for(int i = 0; i<n; i++) {
      a[i][1] = i;
    }

    sort(a.begin(), a.end());

    int res = n;
    for(int i = n-1; i>=0; i--) {
      if(str[a[i][1]] == '1') {
        a[i][0] = res;
        res--;
      }
    }

    for(int i = n-1; i>=0; i--) {
      if(str[a[i][1]] == '0') {
        a[i][0] = res;
        res--;
      }
    }

    sort(a.begin(), a.end(), comp);

    for(int i = 0; i<n; i++) {
      cout<<a[i][0]<<" ";
    }

    cout<<endl;

  }
  return 0;
}
