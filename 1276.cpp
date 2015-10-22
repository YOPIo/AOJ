#include <iostream>
#define MAX 1299711

using namespace std;

bool prime[MAX];

void isPrime(void){

  fill(prime, prime + MAX , true);
  prime[0] = prime[1] = false;
  for(int i = 2 ; i*i < MAX ; i++){
    if(prime[i]){
      for(int j = i*i ; j < MAX ; j += i) prime[j] = false;
    }
  }
}

int main(void){

  isPrime();

  int p;
  while(cin >> p, p){
    int l,r;
    l = r = p;
    while(!prime[l]) l--;
    while(!prime[r]) r++;
    cout << r - l << endl;;
  }
  return 0;
}

