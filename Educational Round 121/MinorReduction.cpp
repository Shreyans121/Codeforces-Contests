#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
      string str;
      cin >> str;

      string sec_str;
      sec_str += (str[0] - 48) + str[1];

      bool flag = false;
      int len = str.size();

      for (int i = len-1; i > 0; i--) {
          int tmp = (str[i] - 48) + (str[i-1] - 48);

          if (tmp >= 10) {
              flag = true;
              str[i] = (tmp % 10) + 48;
              str[i-1] = (tmp/10) + 48;
              break;
          }
      }

      if (flag == true) {
          cout << str;
          cout << endl;
          continue;
      }

      for (int i = 2; i < len; i++) {
        sec_str += str[i];
      }

      cout << sec_str;
      cout << endl;
    }
    return 0;
}
