#include <iostream>

using namespace std;

int main(){
  int phy,chem,mat;
  cout << "Enter the phy marks: ";
  cin >> phy;
  cout << "Enter the chemistry marks: ";
  cin >> chem;
  cout << "Enter the maths marks: ";
  cin >> mat;
  float avg;
  avg = (mat + chem + phy)/3;
  cout << "Average mark: "<< avg;
  return 0;
}