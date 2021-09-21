#include <iostream>
#include "funcs.h"

int main(){
  std::cout<<"Test1: Interval from 5 to 10. Last number is excluded. \n";
  print_interval(5,10);
  std::cout<<"Test2: Interval from -4 to 8. \n";
  print_interval(-4,8);
  std::cout<<"Test3: Interval from 0 to 7. \n";
  print_interval(0,7);
  std::cout<<"Test4: Interval from -1 to 6. \n";
  print_interval(-1,6);
  std::cout<<"Test5: Interval from 11 to 20. \n";
  print_interval(11,20);
  std::cout<<"Test6: Interval from -5 to 5. \n";
  print_interval(-5,5);
  std::cout<<"Test7: Interval from -3 to 9. \n";
  print_interval(-3,9);
}
