#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    int a, b, c;
    cin>>a>>b>>c;

    if(((a+c) % 2 == 0) and (((a+c)/2) % b == 0)) {
      cout<<"YES"<<endl;
    }
    else if((2*b - a > 0) and (2*b - a) % c == 0) {
      cout<<"YES"<<endl;
    }
    else if((2*b - c > 0) and (2*b - c) % a == 0) {
      cout<<"YES"<<endl;
    }
    else {
      cout<<"NO"<<endl;
    }
  }


  return 0;
}
