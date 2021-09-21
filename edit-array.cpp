#include<iostream>
int main()
{
  int inputIndex;
  int inputValue;
  int myData[10];
  for(int i = 0; i<10;i++){
    myData[i]=1;
  }
  do{
    for(int i =0; i<10; i++){
      std::cout<<myData[i]<< " ";
    }
    std::cout<<"\n";
    std::cout<<"Input index:\n";
    std::cin>>inputIndex;
    std::cout<<"Input value:\n";
    std::cin>>inputValue;
    if(inputIndex>=0 && inputIndex<10){
      myData[inputIndex]=inputValue;
    }
    else{
      std::cout<<"Index out of range.";
    }
  }
  while(inputIndex>=0 && inputIndex<10);
}
