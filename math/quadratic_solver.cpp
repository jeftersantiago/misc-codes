#include <iostream>
#include <math.h>

int main () {
  int a,b,c;
  std:: cin >> a >> b >>c;
  if(a==0) return 0;
  int delta = pow(b,2) - 4*a*c;
    if(delta<0) {
     std:: cout << "Delta menor que zero, Não há valor real" << std::endl;
     return 0;
 }
    if(delta>0){
      std::cout << "x1 = " << (-b+sqrt(delta))/(2*a) << std::endl;
      std::cout << "x2 = " << (-b-sqrt(delta))/(2*a) << std::endl;
      return 0;
  }
     std::cout << "Delta = 0 " <<  (-b/2*a) << std::endl;
     return 0;
}
