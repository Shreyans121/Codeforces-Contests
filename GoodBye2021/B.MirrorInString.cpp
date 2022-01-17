#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    int n;
    cin>>n;
    string str, op = "";
    cin>>str;

    if(n == 1 or str[0] == str[1]) {
      cout<<str[0]<<str[0]<<endl;
      continue;
    }

    op += str[0];
    for(int i = 1; i<n; i++) {
      if(str[i] > str[i-1]) {
        break;
      }
      op += str[i];
    }

    cout<<op;
    reverse(op.begin(), op.end());
    cout<<op<<endl;

  }
  return 0;
}
