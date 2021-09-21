#include <iostream>

int main()
{
  int fib[60];
  fib[0]=0;
  fib[1]=1;
  std::cout<<fib[0]<<"\n" <<fib[1]<<"\n";
  for(int i = 2; i<60; i++){
    fib[i] = fib[i-1]+fib[i-2];
    std::cout<< fib[i] <<"\n";
  }
}
/*
Similar to JAVA, an int MAX value exists which represents the 32 bit integer limit.
Once the values surpass this value they turn into a negative of that limit.
This is why some values are either negative or smaller than their preceding values,
as you are adding the negative value of the integer limit to the sequence.
*/
