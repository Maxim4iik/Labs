//
//  main.h
//  Lab4
//
//  Created by Maxim Trokhimets on 26.03.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#ifndef main_h
#define main_h
#pragma once

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

class MainClass
{
  private:
  class Bar
  {
private:
    std::vector<wchar_t> Data;

public:
    Bar();

    Bar(std::vector<wchar_t> &d);

    Bar(const Bar &b);

    int Length();

    std::vector<wchar_t> GetData();

    Bar *operator + (const Bar &b);

    Bar *operator *(int x);

    std::wstring ToString();
  };

  public:
  static void Main(std::vector<std::wstring> &args);
};

#endif /* main_h */
