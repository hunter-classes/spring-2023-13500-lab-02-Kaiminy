#include <iostream>
using namespace std;

int main(){
int myData[10];
  int location;
  int number;
  int i;
  int v;
  
for (i=0;i<10;i++){
  myData[i]=1;
}
  do{
    for (i=0;i<10;i++){
      cout<<myData[i]<<" "<<endl;
      
    }
    
    cout<<"Enter in spot of index:";
    cin>>location;
    cout<<"Enter number:";
    cin>>number;

    if (location>=0 || location<10){
      myData[location]=number;
    }
  } while (number<=0 || number > 10);
  cout<<"Location out of range. Exit and run again"<<endl;
  return 0;
  }