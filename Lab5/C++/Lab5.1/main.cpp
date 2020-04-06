#include "main.h"

MainClass::MyString::MyString(const std::wstring &Value)
{
  this->Value = Value;
}

int MainClass::MyString::GetLength()
{
  return Value.length();
}

MainClass::MyLetterString::MyLetterString(const std::wstring &Value) : MyString(Value)
{
}

void MainClass::MyLetterString::Shift()
{
  Value = StringHelper::toString(Value[Value.length() - 1]) + Value.substr(0, Value.length() - 1);
}

std::wstring MainClass::MyLetterString::GetValue()
{
  return Value;
}

void MainClass::Main(std::vector<std::wstring> &args)
{
  std::wcout << L"hello world" << std::endl;

  MyString *s1 = new MyString(L"hello");
  std::wcout << L"s1.GetLength(): " << s1->GetLength() << std::endl;

  std::wcout << std::endl;

  MyLetterString *s2 = new MyLetterString(L"world");
  std::wcout << L"s2.GetLength(): " << s2->GetLength() << std::endl;

  std::wcout << L"s2.GetValue(): " << s2->GetValue() << std::endl;
  std::wcout << L"s2.Shift()..." << std::endl;
  s2->Shift();
  std::wcout << L"s2.GetValue(): " << s2->GetValue() << std::endl;

	delete s2;
	delete s1;
}
