#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

int P, Q, R;
int pos;
string str;

int formula(void){

  pos++;
  switch(str[pos]){
  case '-': return 2 - formula();
  case 'P': return P;
  case 'Q': return Q;
  case 'R': return R;
  case '0': return 0;
  case '1': return 1;
  case '2': return 2;

  case '(':
    int form1 = formula();
    int form2;
    pos++; // '*' or '+' のぶんを飛ばすため
    switch(str[pos]){
    case '*':
      form2 = formula();
      pos++; // ')' のぶんを飛ばすため
      return min(form1, form2);
    case '+':
      form2 = formula();
      pos++; // ')' のぶんを飛ばすため
      return max(form1, form2);
    }
  }
  return 0;
}


int main(void){

  while(getline(cin, str )){
    int cnt = 0;
    if(str == ".") break;

    // 全パターン試す
    for(int i = 0 ; i < 3 ; i++){
      for(int j = 0 ; j < 3 ; j++){
	for(int k = 0 ; k < 3 ; k++){
	  P = i, Q = j, R = k;
	  pos = -1;
	  if(formula() == 2) cnt++;
	}
      }
    }
    cout << cnt << endl;
  }
  return 0;
}


