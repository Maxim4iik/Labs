#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "stringhelper.h"

class MainClass
{

  private:
  class MyString
  {
protected:
	std::wstring Value;

public:
	MyString(const std::wstring &Value);

	int GetLength();
  };

  private:
  class MyLetterString : public MyString
  {
public:
	MyLetterString(const std::wstring &Value);

	void Shift();

	std::wstring GetValue();
  };

  public:
  static void Main(std::vector<std::wstring> &args);
};
