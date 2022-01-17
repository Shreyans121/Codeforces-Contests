#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    vector<int> vec(3);
    cin>>vec[0]>>vec[1]>>vec[2];

    sort(vec.begin(), vec.end());

    if(vec[0] == vec[1] and vec[1] == vec[2]) {
      if(vec[0] % 2 == 0) {
        cout<<"YES"<<endl;
      }
      else {
        cout<<"NO"<<endl;
      }
    }
    else if(vec[0] == vec[1] and vec[0] != vec[2]) {
      if(vec[2] % 2 == 0) {
        cout<<"YES"<<endl;
      }
      else {
        cout<<"NO"<<endl;
      }
    }
    else if(vec[0] != vec[1] and vec[1] == vec[2]) {
      if(vec[0] % 2 == 0) {
        cout<<"YES"<<endl;
      }
      else {
        cout<<"NO"<<endl;
      }
    }
    else if(vec[0] != vec[1] and vec[1] != vec[2]) {
      if(vec[2] == vec[0] + vec[1]) {
        cout<<"YES"<<endl;
      }
      else {
        cout<<"NO"<<endl;
      }
    }

  }
  return 0;
}
