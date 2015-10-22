#include <iostream>
#include <cstdio> 
using namespace std;

int main(){
  
  while(1){
    int n,p;
    int May_wan[50];
    int i,ans;

  cin >> n >> p;
  int p_max = p;
  if(n == 0&&p == 0)break;
  for(int i = 0; i < 50; i++)May_wan[i] = 0;
   i =0,ans = 0;
  while(1){
    if(p_max == May_wan[i]){
      ans = i;
      break;
}    
    if(p > 0){
      May_wan[i]++;
      p--;
    }

    else if(p == 0){
      p+=May_wan[i];
      May_wan[i] = 0;
    }
    

    if(i == n-1)i = 0;
    else i++;
  }
  cout << i << endl;
  }
return 0;
}


