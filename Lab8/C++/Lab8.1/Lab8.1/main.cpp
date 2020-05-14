//
//  main.cpp
//  Lab8.1
//
//  Created by Maxim Trokhimets on 04.05.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#include "main.h"

using namespace std;

void MyCounter::CountLowerStatic(const std::wstring &s)
{
  int count = s.Count([&] (std::any c)
  {
      std::islower(c);
  });
  std::wcout << L"[static] count: " << count << std::endl;
}

void MyCounter::CountLower(const std::wstring &s)
{
  int count = s.Count([&] (std::any c)
  {
      std::islower(c);
  });
  for (auto listener : ResultCounted->listeners())
  {
      listener(this, new MyCounterEventArgs(count));
  }
}

MyCounterEventArgs::MyCounterEventArgs(int count) : Count(count)
{
}

void Program::OnResultCounted(std::any sender, MyCounterEventArgs *e)
{
  std::wcout << L"[event ] count: " << e->Count << std::endl;
}

void Program::Main(std::vector<std::wstring> &args)
{
  MyCounter *counter = new MyCounter();
  counter->ResultCounted->addListener(L"OnResultCounted", [&] (std::any sender, MyCounterEventArgs* e) {OnResultCounted(sender, e);});

  while (true)
  {
    std::wcout << L"enter a string (empty to exit): ";
    std::wstring line;
    std::getline(std::wcin, line);

    if (line == L"")
    {
      std::wcout << L"bye" << std::endl;
      break;
    }

    MyCounter::CountLowerStatic(line);
    counter->CountLower(line);
  }

    delete counter;
}

