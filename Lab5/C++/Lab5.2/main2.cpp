#include "main2.h"

MainClass::Square::Square(double Width)
{
  this->Width = Width;
}

double MainClass::Square::Area()
{
  return Width * Width;
}

double MainClass::Square::Perimeter()
{
  return 4 * Width;
}

MainClass::Circle::Circle(double Radius)
{
  this->Radius = Radius;
}

double MainClass::Circle::Area()
{
  return M_PI * Radius * Radius;
}

double MainClass::Circle::Perimeter()
{
  return 2 * M_PI * Radius;
}

void MainClass::Main(std::vector<std::wstring> &args)
{
  std::wcout << L"hello world" << std::endl;

  Shape *shape;

  shape = new Square(5);
  std::wcout << L"square .Area(): " << shape->Area() << std::endl;
  std::wcout << L"square .Perimeter(): " << shape->Perimeter() << std::endl;

  shape = new Circle(5);
  std::wcout << L"circle .Area(): " << shape->Area() << std::endl;
  std::wcout << L"circle .Perimeter(): " << shape->Perimeter() << std::endl;

	delete shape;
}
