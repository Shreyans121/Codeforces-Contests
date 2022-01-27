#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    int n;
    cin>>n;

    vector<int> arr(n), brr(n);

    for(int i = 0; i<n; i++) {
      cin>>arr[i];
    }

    for(int i = 0; i<n; i++) {
      cin>>brr[i];
    }
    int maxA = -1;
    int maxB = -1;
    for(int i = 0; i<n; i++) {
      if(arr[i] > brr[i]) {
        swap(arr[i], brr[i]);
      }
    }

    for(int i = 0; i<n; i++) {
      if(arr[i] > maxA) {
        maxA = arr[i];
      }
      if(brr[i] > maxB) {
        maxB = brr[i];
      }
    }

    cout<<maxA*maxB<<endl;
  }


  return 0;
}
