#include<iostream>
int fact(int n){
  if(n<=1) return 1;
  return n*fact(n-1);
}
int main() {
  int n;
  int k;
  while(true){
      std::cout << "n " <<  std::endl;
      std::cin >> n;
      std::cout << "k " << std::endl;
      std::cin >> k;
      if(n == 0 || k == 0) return 0;
      std::cout << fact(n)/(fact(k)*(n-k))<< std::endl;
  }
  return 0;
}
