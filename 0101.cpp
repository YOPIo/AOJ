#include <iostream>
#include <string>

using namespace std;

int main(void){

  int n,N;
  string s;
  cin >> n;
  cin.ignore(); //無視

  while(n--){

    getline( cin , s );

    while( s.find("Hoshino",0 ) != string::npos ){
       N = s.find("Hoshino" , 0 ); 
      // 0文字目から文字を探す
      s.replace( N , 7 , "Hoshina");
      // 変数名.replace(最初(位置),文字数,文字列)
    }
    cout << s << endl;
  }
  return 0;
}


