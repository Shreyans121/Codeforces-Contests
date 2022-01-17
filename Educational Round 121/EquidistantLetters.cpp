#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    string str;
    cin>>str;

    unordered_map<char, bool> mp;
    vector<char> vec;
    for(auto ch: str) {
      if(mp[ch] == true) {
        vec.push_back(ch);
        mp[ch] = false;
      }
      else {
        mp[ch] = true;
      }
    }

    for(char ch: vec) {
      cout<<ch;
    }

    for(auto ele: mp) {
      if(ele.second == true)
        cout<<ele.first;
    }

    for(char ch: vec) {
      cout<<ch;
    }

    cout<<endl;
  }


  return 0;
}
