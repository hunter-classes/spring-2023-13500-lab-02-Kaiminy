#include <iostream>
using namespace std;

int main(){
  int fib[60];//make an array
  fib[0]=0;
  fib[1]=1;

  cout<<"The Fibonacci Sequence is :"<<endl<<fib[0]<<endl<<fib[1]<<endl;

  for(int i=2;i<60;i++){
    fib[i] = fib[i-1]+fib[i-2];
    cout<<fib[i]<<endl;
  }
  return 0;
    }

//as the sequence approaches two billion, some numbers start to become negative. This may be due to the effect of the previous number in the equation