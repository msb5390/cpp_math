// root_finder.cpp
//
// This program calls a root-finding function to find
// roots of a given function.
//
// Written by Michael S. Bell
// msb5390@gmail.com
// December 22, 2019

#include <iostream>
#include "../include/bisection.h"
using namespace std;

double f(double x){
  return x*x*x;
}

int main(){

  double a, b, accuracy, root;
  cout << "Please enter a:" << endl;
  cin >> a;
  cout << "Please enter b:" << endl;
  cin >> b;
  cout << "Please enter desired accuracy:" << endl;
  cin >> accuracy;

  try {
    root = bisection(f, a, b, accuracy);
    cout << "Found a root near x = " << root << " to accuracy " << accuracy <<endl;
  }
  catch(...){
    cout << "No root found!" << endl;
  }
    
  return 1;
}
