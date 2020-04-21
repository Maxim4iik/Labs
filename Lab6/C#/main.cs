using System;

public static class main
{
	
	static int Main()
	{
		const int n = 5;
		Exception[] obj = Arrays.InitializeWithDefaultInstances<Exception>(n);
		obj[0] = new Exception(1, 42, 1);
		obj[1] = new Exception(1, -2, 1);
		obj[2] = new Exception(-2, 1, 5);
		obj[3] = new Exception(1, 84, 2);
		obj[4] = new Exception(4, 83, 56);

		for (int i = 0; i < n; i++)
		{
			Console.Write("[");
			Console.Write(i + 1);
			Console.Write("] = ");
			Console.Write(obj[i].value());
			Console.Write("\n");
		}
		return 0;
	}

}