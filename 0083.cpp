#include <iostream>

using namespace std;

int main(void){

  int year,month,day;
  while( cin >> year >> month >> day ){
   if( 1989 < year || ( year == 1989 && 1 <= month && 8 <= day ) ){
     cout << "heisei" <<" "<< year-1988 << " " << month << " " << day << endl;
    }
    else if( 1926 < year || ( year == 1926 && 12 <= month && 25 <= day) ){
      cout <<"showa"<<" "<< year-1925 <<" "<<month <<" "<< day << endl;
    }
    else if( 1912 < year || ( year == 1912 && 7 <= month && 30 <= day )){
      cout <<"taisho"<<" "<< year-1911 <<" "<< month <<" "<< day << endl;
    }
    else if( 1868 < year || ( year == 1868 && 9 <= month && 8 <= day ) ){
      cout <<"meiji" <<" "<< year-1867 <<" "<< month <<" "<< day << endl;
      }
    else cout << "pre-meiji" << endl;
  }

  return 0;
}


