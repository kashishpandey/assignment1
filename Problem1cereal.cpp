//Problem 1 (cereal):
//A metric ton is 35,273.92 ounces. Write a program that will read the weight (console input) of a package
//of breakfast cereal in ounces and output the weight in metric tons as well as the number of boxes needed
//to yield one metric ton of cereal.

#include <iostream>
using namespace std;
int main ()
{
  double metricTon = 35273.92;
  double ounce;
  double numOfBoxes;
  double boxes;
  double weight;

  cout << "Please enter the weight of a package of breakfast cereal in ounces: "; //getting weight in oz
  cin >> ounce; // assigning this value to ounce

  weight = ounce / metricTon; // calculating weight
  cout<< "The weight of the cereal: " << weight << endl; // obtaining weight of cereal

  numOfBoxes = metricTon / ounce; //calculating boxes
  cout << "The number of boxes of cereal that will hold a ton: " << numOfBoxes << endl; // printing total number of boxes 

  return 0;

}
