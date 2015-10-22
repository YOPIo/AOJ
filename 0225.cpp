#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int data[26][26];
bool visited[26];
bool exist[26];
 
void rec(int now) {
  visited[now] = true;
  for(int i = 0; i < 26; i++) {
    if(exist[i] && !visited[i] && data[now][i] != 0) {
      rec(i);
    }
  }
}
 
int main(void) {
  int n;
  while(cin >> n , n) {

    fill(data[0], data[0] + 26*26, 0);
    fill(exist, exist+26, false);

    for(int i = 0; i < n; i++) {
      string str;
      cin >> str;
      data[str[0]-'a'][str[str.length()-1]-'a']++;;
      exist[str[0]-'a'] = exist[str[str.length()-1]-'a'] = true;
    }
 
    int num[26];
    fill(num, num + 26, 0);
 
    for(int i = 0; i < 26; i++) {
      for(int j = 0; j < 26; j++) {
    if(data[i][j] >= 0) {
      num[i] += data[i][j];
      num[j] -= data[i][j];
    }
      }
    }
 
    bool flag = true;
    for(int i = 0; i < 26; i++) {
      if(num[i] != 0) {
    flag = false;
    break;
      }
    }
 
    if(flag == true) {
      fill(visited, visited + 26, false);
      int cnt = 0;
      for(int i = 0; i < 26; i++) {
    if(exist[i] && !visited[i]) {
      rec(i);
      cnt++;
    }
      }
      if(cnt != 1) flag = false;
    }
 
    if(flag) cout << "OK" << endl;
    else     cout << "NG" << endl;
  }
  return 0;
}


