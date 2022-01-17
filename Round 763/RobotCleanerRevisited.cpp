#include<iostream>
using namespace std;

const unsigned int M = 1000000007;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    int n, m, rb, cb, rd, cd, p;
    cin>>n>>m>>rb>>cb>>rd>>cd>>p;

    int cnt = 0;
    int i = rb;
    int j = cb;

    int dr = 1;
    int dc = 1;

    int clean = 100/p;

    while(1) {
      if(i == rd or j == cd) {
        clean--;
        if(clean == 0) {
          break;
        }
      }
      if(i+dr > n or i+dr < 1) {
        dr = -1 * dr;
      }
      if(j+dc > m or j + dc < 1) {
        dc = -1 * dc;
      }

      i += dr;
      j += dc;
      cnt++;

      // cout<<i<<" "<<j<<endl;

    }
    cout<<cnt<<endl;

  }


  return 0;
}
