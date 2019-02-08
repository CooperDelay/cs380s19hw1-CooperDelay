/*******************************************************************************
// Author:      Cooper DeLay
// File Name:   CountCharacters.cpp
// Class:       CS 380 Algos
// Assignment:  01A_CountCharacters
*******************************************************************************/



#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main (void)
{
  int aCharCounts[27];
  int largestCharCountIndex = 0;
  ifstream fDataFile;
  char cFileChar;
  char cPrintChar;
  fDataFile.open ("String.txt");

  for (int i = 0; i < 27; i++)
  {
    aCharCounts[i] = 0;
  }

  //load all character counts into an array of integers, sorted alphabetically
  while (fDataFile >> cFileChar)
  {
    if (95 == cFileChar)
    {
      aCharCounts[26]++;
    }
    else
    {
      aCharCounts[cFileChar - 97]++;
    }
  }
  //loop until largest character is _
  while (aCharCounts[26] > 0)
  {
    //find largest character count in array
    for (int i = 0; i < 27; i++)
    {
      if (aCharCounts[i] > aCharCounts[largestCharCountIndex])
      {
        largestCharCountIndex = i;
      }
    }

    if (!( 26 == largestCharCountIndex ))
    {
      cPrintChar = largestCharCountIndex + 97;
      cout << cPrintChar;
    }

    //make sure no character is used twice
    aCharCounts[largestCharCountIndex] = 0;
  }
  
  cout << "\n";
  system ("PAUSE");

  fDataFile.close ();
  return 0;
}