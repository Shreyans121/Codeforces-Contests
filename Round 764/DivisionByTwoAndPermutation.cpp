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

    unordered_map<int, bool> mp;
    vector<int> oob;
    int temp;

    for(int i = 0; i<n; i++) {
      cin>>temp;
      if(temp <= n) {
        if(mp[temp] == false) {
          mp[temp] = true;
        }
        else {
          oob.push_back(temp);
        }
      }
      else {
        oob.push_back(temp);
      }
    }

    int sz = oob.size();

    for(auto itr = oob.begin(); itr != oob.end(); itr++) {
      // cout<<*itr<<"\n";

      while(*itr >= 1) {
        if(*itr <= n and *itr >= 1 and mp[*itr] == false) {
          mp[*itr] = true;
          sz--;
          // cout<<sz<<" "<<*itr<<" "<<endl;
          break;
        }
        else {
          *itr = *itr/2;
          // cout<<*itr<<endl;
        }
      }
    }

    if(sz == 0) {
      cout<<"YES"<<endl;
    }
    else {
      cout<<"NO"<<endl;
    }

  }


  return 0;
}
