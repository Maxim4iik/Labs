using System;

class MainClass {

  abstract class Shape {
    public abstract double Area();

    public abstract double Perimeter();
  }

  class Square : Shape {
    private double Width;

    public Square(double Width) {
      this.Width = Width;
    }

    public override double Area() {
      return Width * Width;
    }

    public override double Perimeter() {
      return 4 * Width;
    }
  }

  class Circle : Shape {
    private double Radius;

    public Circle(double Radius) {
      this.Radius = Radius;
    }

    public override double Area() {
      return Math.PI * Radius * Radius;
    }

    public override double Perimeter() {
      return 2 * Math.PI * Radius;
    }
  }

  public static void Main(string[] args) {
    Console.WriteLine("hello world");

    Shape shape;

    shape = new Square(5);
    Console.WriteLine("square .Area(): " + shape.Area());
    Console.WriteLine("square .Perimeter(): " + shape.Perimeter());

    shape = new Circle(5);
    Console.WriteLine("circle .Area(): " + shape.Area());
    Console.WriteLine("circle .Perimeter(): " + shape.Perimeter());
  }
}
