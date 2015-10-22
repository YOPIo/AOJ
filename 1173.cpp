#include <iostream>
#include <string>
#include <stack>

using namespace std;

string hoge;
string hogehoge;
stack<char> foo;

int main(void){

  while(1){

    while( !(foo.empty() ) ){
      foo.pop();
    }

    getline( cin , hoge );
    if( hoge == "." )break;

    hogehoge = "";
    for( int i = 0 ; i < hoge.size() ; i++ ){
      if( hoge[i] == '[' || hoge[i] == ']' || hoge[i] == '(' || hoge[i] == ')' ){
	hogehoge += hoge[i]; 
      }
    }

    for( int i = 0 ; i < hogehoge.size() ; i++ ){
      if(hogehoge[i] == '[' ) foo.push(hogehoge[i]);      
      if(hogehoge[i] == '(' ) foo.push(hogehoge[i]);
      if(hogehoge[i] == ']' ){
	if( !( foo.empty() ) && foo.top() == '[' ){
	  foo.pop();
	}
	else goto bad;
      } 
      if(hogehoge[i] == ')' ){
        if( !(foo.empty())  && foo.top() == '(' ){
          foo.pop();
        }
        else goto bad;
      }
    }
    if( foo.empty() ){
    cout << "yes" << endl;
    continue;
    }
  bad:
    cout << "no" << endl;
  }
  return 0;
}


