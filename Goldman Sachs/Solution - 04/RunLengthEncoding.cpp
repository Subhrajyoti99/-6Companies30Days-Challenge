#include <bits/stdc++.h>
using namespace std;

string encode(string src);

int main() {

  int T;
  cin >> T;
  while (T--)
  {
    string str;
    cin >> str;

    cout << encode(str) << endl;
  }
  return 0;
}

string encode(string src){
  int i, j, k;
  int n = src.size();
  string result = "";
  char prev = src[0];
  int count = 0;
  for (i = 0; i < n ; i++){
    if (src[i] != prev){
      prev = src[i];
      result.push_back(src[i - 1]);
      string number = to_string(count);
      result += number;
      count = 1;
    }
    else{
      count++;
    }
  }
  result.push_back(src[n - 1]);
  string number = to_string(count);
  result += number;
  return result;
}

