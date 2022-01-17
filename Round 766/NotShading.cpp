#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    int n, m, r, c;
    cin>>n>>m>>r>>c;

    r -= 1;
    c -= 1;

    int oper = 0;
    bool allWhite = true;
    bool inOne = false;

    vector<vector<char>> vec(n, vector<char> (m));

    for(int i = 0; i<n; i++) {
      for(int j = 0; j<m; j++) {
        cin>>vec[i][j];
        if(vec[i][j] == 'B') {
          allWhite = false;
        }

        if((i == r or j == c) and vec[i][j] == 'B') {
          inOne = true;
        }
      }
    }

    if(allWhite) {
      cout<<oper - 1<<endl;
    }
    else if(vec[r][c] == 'B') {
      cout<<oper<<endl;
    }
    else if(inOne) {
      cout<<oper + 1<<endl;
    }
    else {
      cout<<oper + 2<<endl;
    }
  }


  return 0;
}
