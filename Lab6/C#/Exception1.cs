//
//  Exception1.h
//  Lab6
//
//  Created by Maxim Trokhimets on 22.04.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//
using System;

public class Exception1
{
private double b;
private double c;
	public Exception1(double b, double c)
	{
		this.b = b;
		this.c = c;
	}
	public double value()
	{
		try
		{
			if (b / c - 42 <= 0)
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
		return (41 - b / c + 1);
	}
}

