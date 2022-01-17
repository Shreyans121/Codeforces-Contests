#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    int n;
    cin>>n;

    vector<int> vec(n);

    for(int i = 0; i<n; i++) {
      cin>>vec[i];
    }

    int minEle = vec[0];
    int maxEle = vec[0];

    for(int i = 1; i<n; i++) {
      if(vec[i] > maxEle) {
        maxEle = vec[i];
      }

      if(vec[i] < minEle) {
        minEle = vec[i];
      }
    }

    cout<<maxEle - minEle<<endl;
  }


  return 0;
}
