#include <iostream>
#include <map>

using namespace std;

int main(void){

  int n;
  while( cin >> n , n ){

    map<int,long long> m;
    bool isNA = false;

    while( n-- ){

      int id,price,num;
      cin >> id >> price >> num;

      if( m[id] < 1000000 && 1000000 <= m[id] + (long long)price*num ){
	cout << id << endl;
	isNA = true;
      }
      m[id] += (long long)price*num;
    }

    if(!isNA) cout << "NA" << endl;
  }
  return 0;
}


