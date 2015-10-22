#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int KUPC[126], ans;
string str;

int main(void){

  cin >> str;
  for(int i = 0 ; i < str.size() ; i++){
    if(str[i] == 'K') KUPC['K']++;
    else if(str[i] == 'U') KUPC['U']++;
    else if(str[i] == 'P') KUPC['P']++;
    else if(str[i] == 'C') KUPC['C']++;
    ans = min(min(KUPC['K'], KUPC['U']), min(KUPC['P'], KUPC['C']));
  }
  cout << ans << endl;
  return 0;
}


