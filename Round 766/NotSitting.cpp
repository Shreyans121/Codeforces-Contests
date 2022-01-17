#include<iostream>
#include<queue>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;

  while(t--) {
    int n, m;
    cin>>n>>m;

    priority_queue<int, vector<int>, greater<int>> pq;
    int temp = 0;

    for(int i = 0; i<n; i++) {
      for(int j = 0; j<m; j++) {
        temp = max(i, n-1-i) + max(j, m-j-1);
        pq.push(temp);
      }
    }

    while(!pq.empty()) {
      cout<<pq.top()<<" ";
      pq.pop();
    }

    cout<<endl;
  }


  return 0;
}
