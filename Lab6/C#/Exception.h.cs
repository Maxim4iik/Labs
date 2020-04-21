using System;

public class Exception
{
private double a;
private double b;
private double c;
	public Exception(double a, double b, double c)
	{
		this.a = a;
		this.b = b;
		this.c = c;
	}
	public double value()
	{
		try
		{
			if (b / c == 42)
			{
			   throw new System.Exception("");
			}
		}
    
		catch (string str)
		{
			Console.Write("Ошибка ");
			Console.Write(str);
			Console.Write(" - на 0 делить нельзя!");
			Console.Write("\n");
		}
    
		try
		{
			if (a * b + 2 <= 0)
			{
				throw new System.Exception("");
			}
		}
    
		catch (string str)
		{
			Console.Write("Ошибка ");
			Console.Write(str);
			Console.Write(" - Натуральный логарифм < 0!");
			Console.Write("\n");
		}
    
		return (Math.Log(a * b + 2) * c) / (41 - b / c + 1);
	}
}

