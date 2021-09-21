#include <iostream>

int main()
{
  int x;
  std::cout<< "Please enter an integer between 0 and 100, exclusive: \n";
  std::cin>> x;
  while(x<=0 || x>=100){
    std::cout<< "Please re-enter: \n";
    std::cin>>x;
  }
  int squared = x*x;
  std::cout<<"Your number squared is " << squared;

}
