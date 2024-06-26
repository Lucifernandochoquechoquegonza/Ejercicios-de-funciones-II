#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
 {
  float cateto1,cateto2,hipo=0;
 
  cout << "Digite cateto 1: ";
  cin >> cateto1;
  cout << "Digite cateto 2: ";
  cin >> cateto2;
 
  hipo = sqrt(pow(cateto1,2)+pow(cateto2,2));
 
  cout << "La hipotenusa es " << hipo << endl;
 
  return 0;
}