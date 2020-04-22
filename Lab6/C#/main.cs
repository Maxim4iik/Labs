using System;

public static class main
{
	//
	//  main.cpp
	//  Lab6
	//
	//  Created by Maxim Trokhimets on 21.04.2020.
	//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
	//

	static int Main()
	{
		const int n = 2;
		Exception[n] obj = Arrays.InitializeWithDefaultInstances<Exception>(n);
		obj[0] = new Exception(1, -2);
		obj[1] = new Exception(-2, 1);

		for (int i = 0; i < n; i++)
		{
			   Console.Write("[");
			   Console.Write(i + 1);
			   Console.Write("] = ");
			   Console.Write(obj[i].value());
			   Console.Write("\n");
		}

		const int m = 2;
		Exception1[k] objec = Arrays.InitializeWithDefaultInstances<Exception>(n);
		obj[0] = new Exception(42, 1);
		obj[1] = new Exception(84, 2);

		for (int k = 0; k < m; k++)
		{
			Console.Write("[");
			Console.Write(k + 1);
			Console.Write("] = ");
			Console.Write(objec[k].value());
			Console.Write("\n");
		}
		return 0;
	}
}