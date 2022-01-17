#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int gcd(int a, int b) {
  if (a == 0) {
    return b;
  }
  return gcd(b % a, a);
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin>>n;

  vector<int> vec(n);
  unordered_map<int, bool> mp;
  int cnt = 0;

  for(int i = 0; i<n; i++) {
    cin>>vec[i];
    mp[vec[i]] = true;
  }

  // sort(vec.begin(), vec.end(), greater<int>());

  int temp = 0;

  for(int i = 0; i<vec.size(); i++) {
    for(int j = i+1; j<vec.size(); j++) {
      temp = gcd(vec[i], vec[j]);
      if(mp[temp] == false) {
        mp[temp] = true;
        vec.push_back(temp);
      }
    }
  }

  if(mp[1] != true) {
    cnt++;
    mp[1] = true;
  }

  cout<<vec.size() - n;


  return 0;
}
