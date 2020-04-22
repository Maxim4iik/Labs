//
//  Exception.h
//  Lab6
//
//  Created by Maxim Trokhimets on 21.04.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//


using System;

public class Exception
{
private double a;
private double b;
	public Exception(double a, double b)
	{
		this.a = a;
		this.b = b;
	}
	public double value()
	{
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
		return (Math.Log(a * b) + 2);
	}
}

