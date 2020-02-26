using System;

public static class GlobalMembers
{
	//равенство
	public static bool func1(int x, int x1)
	{
//ORIGINAL LINE: int *p;
		int p;
		int p1;
		p = x;
		p1 = x1;
		if ((p ^ p1) == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	//сумма
	public static void func2(int y, int y1, ref int result)
	{
		result = (y | y1);
	}

	static void Main(string[] args)
	{
		int x;
		int x1;
		int y;
		int y1;
		int result;
		Console.Write("Введите x");
		Console.Write("\n");
		x = int.Parse(ConsoleInput.ReadToWhiteSpace(true));
		Console.Write("Введите x1");
		Console.Write("\n");
		x1 = int.Parse(ConsoleInput.ReadToWhiteSpace(true));
		Console.Write("Введите y");
		Console.Write("\n");
		y = int.Parse(ConsoleInput.ReadToWhiteSpace(true));
		Console.Write("Введите y1");
		Console.Write("\n");
		y1 = int.Parse(ConsoleInput.ReadToWhiteSpace(true));
		Console.Write("\n");

		Console.Write(func1(-57, -57));
		Console.Write("\n");
		Console.Write(func1(124, -10));
		Console.Write("\n");
		Console.Write(func1(1, 2));
		Console.Write("\n");
		Console.Write(func1(x, x1));
		Console.Write("\n");
		Console.Write("\n");


		func2(82, 46, ref result);
		Console.Write(result);
		Console.Write("\n");

		func2(229, 110, ref result);
		Console.Write(result);
		Console.Write("\n");

		func2(-3, 151, ref result);
		Console.Write(result);
		Console.Write("\n");

		func2(y, y1, ref result);
		Console.Write(result);
		Console.Write("\n");

	}

}