//
//  main.cpp
//  Lab4
//
//  Created by Maxim Trokhimets on 26.03.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#include "main.h"

MainClass::Bar::Bar()
{
  this->Data = std::vector<wchar_t>(0);
}

MainClass::Bar::Bar(std::vector<wchar_t> &d)
{
  this->Data = static_cast<std::vector<wchar_t>>(d.Clone());
}

MainClass::Bar::Bar(const Bar &b) : Bar(b.Data)
{
}

int MainClass::Bar::Length()
{
    return Data.size();
}

std::vector<wchar_t> MainClass::Bar::GetData()
{
    return static_cast<std::vector<wchar_t>>(Data.Clone());
}

Bar *MainClass::Bar::operator + (const Bar &b)
{
  Bar *(*ret) = new Bar(std::vector<wchar_t>(this->Length() + b.Length()));
  this->Data.CopyTo(ret->Data, 0);
  std::copy_n(b.Data.begin(), b.Length(), ret->Data.begin() + this->Length());
  return ret;
}

Bar *MainClass::Bar::operator *(int x)
{
  Bar *(*ret) = new Bar(std::vector<wchar_t>(x * this->Length()));
  for (int i = 0; i < this->Length(); i++)
  {
    for (int j = 0; j < x; j++)
    {
      ret->Data[i * x + j] = this->Data[i];
    }
  }
  return ret;
}

std::wstring MainClass::Bar::ToString()
{
  return std::wstring(Data);
}

void MainClass::Main(std::vector<std::wstring> &args)
{
  std::wcout << L"hello world" << std::endl;

  Bar *(*world) = new Bar((std::wstring(L"world")).ToCharArray());

  Bar *(*CB1) = new Bar();
  Bar *(*CB2) = new Bar((std::wstring(L"hello")).ToCharArray());
  Bar *(*CB3) = new Bar(world);

  CB3 = (*CB3) * 2;
  CB1 = (*(*CB2)) + (*(*CB3));

  std::wcout << CB1 << std::endl;

    delete CB3;
    delete CB2;
    delete CB1;

}
