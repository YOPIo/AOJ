#include <iostream>
#include <cmath>

using namespace std;

char s[101];

void change(int a, int b){

  swap(s[a - 1], s[b - 1]);
  int n = b - a;
  n %= 26;
  int N = n;



  if(s[a - 1] + n > 'z'){
    n -= 'z' - s[a - 1];
    s[a - 1] = 'a' + --n;
  }else s[a - 1] += n;

  if(s[b - 1] + N > 'z'){
    N -= 'z' - s[b - 1];
    s[b - 1] = 'a' + --N;
  }else s[b - 1] += N;

}


int main(void){


  int dn;
  while(cin >> dn, dn){
    cin >> s;

    int a[101], b[101], cnt = 0;
    for(int i = 0 ; i < dn ; i++){
      cin >> a[i] >> b[i];
      cnt++;
    }
    for(int i = cnt - 1 ; i >= 0 ; i--){
      change(a[i], b[i]);
    }
    cout << s << endl;

  }

  return 0;
}


