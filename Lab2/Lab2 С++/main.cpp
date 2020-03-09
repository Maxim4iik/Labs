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
  text.Add("Far far 1 away, 2 behind the 3 word mountains");
  cout << ".Add() x1:" << endl << text << endl;

  cout << endl;
  text.Add("Far from 4 the countries 5 Vokalia and Consonantia");
  text.Add("There live 6 the blind texts");
  text.Add("Separated they 7 live in 8 Bookmarksgrove");
  text.Add("Right at 9 the coast of the Semantics, a 0 large language ocean");
  cout << ".Add() x4:" << endl << text << endl;

  cout << endl;
  cout << ".Digits(): " << text.Digits() << endl;

  cout << endl;
  text.Replace("Separated they 7 live in 8 Bookmarksgrove", "hello world");
  cout << ".Replace():" << endl << text << endl;

  cout << endl;
  cout << ".Size(): " << text.Size() << endl;

  cout << endl;
  text.Remove("There live 6 the blind texts");
  cout << ".Remove():" << endl << text << endl;

  cout << endl;
  cout << ".Size(): " << text.Size() << endl;

  cout << endl;
  text.Clear();
  cout << ".Clear():" << endl << text << endl;

  return 0;
}
