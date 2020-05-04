//
//  main.h
//  Lab8.1
//
//  Created by Maxim Trokhimets on 04.05.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#ifndef main_h
#define main_h

#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <cctype>
#include <any>
#include "tangible_event.h"

class MyCounter
{
  public:
  static void CountLowerStatic(const std::wstring &s);

  void CountLower(const std::wstring &s);

  TangibleEvent<EventHandler<MyCounterEventArgs>> *ResultCounted = new TangibleEvent<EventHandler<MyCounterEventArgs>>();
};

class MyCounterEventArgs : public EventArgs
{
  public:
  const int Count;

  MyCounterEventArgs(int count);
};

class Program
{
  private:
  static void OnResultCounted(std::any sender, MyCounterEventArgs *e);

  public:
  static void Main(std::vector<std::wstring> &args);
};

#endif /* main_h */
