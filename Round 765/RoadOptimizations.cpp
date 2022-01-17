// DP se hoga NOT Greedy

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) {
    return (a.second < b.second);
}

int main(int argc, char const *argv[]) {
  int n, l, k;
  cin>>n>>l>>k;

  vector<int> idx(n);
  vector<int> limit(n);

  for(int i = 0; i<n; i++) {
    cin>>idx[i];
  }

  for(int i = 0; i<n; i++) {
    cin>>limit[i];
  }

  if(k == 0) {
    int ans = 0;

    for(int i = 1; i<n; i++) {
      ans += limit[i-1] * (idx[i] - idx[i-1]);
    }
    ans += limit[n-1] * (l - idx[n-1]);

    cout<<ans;
  }
  else {
    vector<pair<int, int>> vec(n);
    for(int i = 0; i<n; i++) {
      vec[i] = make_pair(limit[i], idx[i]);
    }

    sort(vec.begin(), vec.end());

    for(int i = 0; i<k; i++) {
      if(vec[n-k-1].second != 0) {
        vec.pop_back();
      }
      else {
        vec.insert(vec.begin(), make_pair(vec[n-k-1].first, vec[n-k-1].second));
        vec.pop_back();
        vec.pop_back();
      }
    }

    sort(vec.begin(), vec.end(), sortbysec);

    int fin = 0;
    for(int i = 1; i<n-k; i++) {
      fin += vec[i-1].first * (vec[i].second - vec[i-1].second);
    }

    fin += vec[n-k-1].first * (l - vec[n-k-1].second);

    cout<<fin;
  }

  return 0;
}
