#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    int n;
    cin>>n;

    vector<int> arr(n);
    vector<int> brr;

    for(int i = 0; i<n; i++) {
      cin>>arr[i];
    }

    vector<pair<int, int>> vec(n);

    for(int i = 0; i<n; i++) {
      vec[i] = make_pair(arr[i], i);
    }

    sort(vec.begin(), vec.end());

    for(int i = 0; i<n; i++) {
      cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }

    int ptr = -1;
    int mex = 0;

    while(ptr < n-1) {
      mex = 0;
      cout<<"BWAF ";
      for(int i = 0; i<n; i++) {
        cout<<"BFAIF ";
        if(ptr < vec[i].second and mex == vec[i].first) {
          cout<<"BIFAA ";
          ptr = vec[i].second;
          mex += 1;
          cout<<"BIFBA ";
        }
        cout<<"EXITFOR ";
      }
      cout<<endl<<mex<<" "<<ptr<<endl;
      brr.push_back(mex);
    }

    cout<<brr.size()<<endl;

    for(int i = 0; i<brr.size(); i++) {
      cout<<brr[i]<<" ";
    }

    cout<<endl;

  }


  return 0;
}
