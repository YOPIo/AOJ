#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){

  int n;
  string s;
  while(cin >> n, n){
    int m[1000] = {0}, cnt = 0, ba = 0;
    cin >> s;

    for(int i = 0 ; i < 100 ; i++){

      if(cnt == n){
	//cout << cnt << endl;
	cnt = 0;
      }

      if(s[i] == 'M'){ // ﾃｧﾂ板ｷ
	m[cnt]++;
      }else if(s[i] == 'S'){ // ﾃ･ﾂ敖甘､ﾂｸﾂｻ
	ba += m[cnt] + 1;
	m[cnt] = 0;
      }else if(s[i] == 'L'){ // ﾃ･ﾂｧﾂｫ
	m[cnt] += ba + 1;
	ba = 0;
      }
      cnt++;
    }
    sort(m, m + n);
    for(int i = 0 ; i < n ; i++){
      cout << m[i] << " ";
    }
    cout << ba << endl;


  }
  return 0;
}


