//
//  main.cpp
//  Lab2
//
//  Created by Maxim Trokhimets on 04.03.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cctype>
#include "TText.h"

using namespace std;
int main() {
  TText text(10);

  cout << endl;
  cout << "Empty:" << endl << text << endl;

  cout << endl;
  text.Add(" 1 away, 2 behind, 3 words");
  cout << "Add() x1:" << endl << text << endl;

  cout << endl;
  text.Add(" Far from 4 the countries 5");
  text.Add(" There live 6 old men");
  text.Add(" Separated they 7 live in 8 Bookmarksgrove");
  text.Add(" Right at 9, there is a 0 large ocean");
  cout << "Add() x4:" << endl << text << endl;

  cout << endl;
  cout << "Digits(): " << text.Digits() << endl;

  cout << endl;
  text.Replace(" Separated they 7 live in 8 Bookmarksgrove", " hello world");
  cout << "Replace():" << endl << text << endl;

  cout << endl;
  cout << "Size(): " << text.Size() << endl;

  cout << endl;
  text.Remove(" There live 6 old men");
  cout << "Remove():" << endl << text << endl;

  cout << endl;
  cout << "Size(): " << text.Size() << endl;

  cout << endl;
  text.Clear();
  cout << "Clear():" << endl << text << endl;

  return 0;
}
