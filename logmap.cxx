

#include <iostream>
using namespace std;
int main(){
 double r,x;
int N,M;

N=30;
M=100;

for(double r=0.1; r<4; r+=0.0001){
  x=1.0/2.0;
  for(int i=1; i<=N; i++){
      x=x*r*(1-x);
  }
  for(int j=31; j<=M; j++){
    x=x*r*(1-x);
      cout<<r <<"		" <<x <<endl; 
  }
}
return 0;
}