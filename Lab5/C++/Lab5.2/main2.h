#pragma once

#define _USE_MATH_DEFINES
#include <string>
#include <vector>
#include <iostream>
#include <cmath>

class MainClass
{

  private:
  class Shape
  {
public:
	virtual double Area() = 0;

	virtual double Perimeter() = 0;
  };

  private:
  class Square : public Shape
  {
private:
	double Width = 0;

public:
	Square(double Width);

	double Area() override;

	double Perimeter() override;
  };

  private:
  class Circle : public Shape
  {
private:
	double Radius = 0;

public:
	Circle(double Radius);

	double Area() override;

	double Perimeter() override;
  };

  public:
  static void Main(std::vector<std::wstring> &args);
};
