/*******************************************************************************
// Author:      Cooper DeLay
// File Name:   EuclidianDivison.cpp
// Class:       CS 380 Algos
// Assignment:  01B_EuclidianDivision
*******************************************************************************/
#include <iostream>
using namespace std;

int main ()
{
  char szSolution[10];
  szSolution[9] = '\0';
  char szLetters[17] = "acdegilmnoprstuw";
  unsigned long long int hash = 910897038977002;

  //undo the hashing algorithm to find the letters used
  for (int i = 0; i < 9; i++)
  {
    //add theletter at the remainder index to the solution
    szSolution[8 - i] = szLetters[hash % 37];

    //divide by 37 to find the hash output not including this letter
    hash = hash / 37;
  }

  cout << szSolution << '\n';

  system ("PAUSE");

  return 0;
}