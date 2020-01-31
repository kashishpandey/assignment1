/*
Problem 2 (firecapacity):
Write a program that determines whether a meeting room is in violation of fire law regula- tions regarding
the maximum room capacity. The program will read in the maximum room capacity and the number of
people to attend the meeting. If the number of people is less than or equal to the maximum room capacity,
the program announces that it is legal to hold the meeting and tells how many additional people may
legally attend. If the number of people exceeds the maximum room capacity, the program announces that
the meeting cannot be held as planned due to fire regulations and tells how many people must be excluded
in order to meet the fire regulations.
*/

#include <iostream>
using namespace std;

int main ()
{
  int numberOfPeople; // the number of people that are in the room
  int roomCapacity; // max number of poeple that can be in the room

  cout << "Enter the room capacity :";
  cin >> roomCapacity;
  cout << "Enter number of people in the meeting :";
  cin >> numberOfPeople;

// if the total number of people is under the max room capacity then the meeting can take place
if(numberOfPeople <= roomCapacity)
  cout << "You can hold the meeting legally!";
else if (numberOfPeople > roomCapacity) // there are too many people in the meeting 
{
  cout << "The meeting room is in violation of fire law regulations" << endl;
  cout << "But if you still want to hold the meeting then you have to exclude: " << (numberOfPeople - roomCapacity) << " people";
  // calculating the number of people to exclude so the meeting can take place
  }
return 0;

}
