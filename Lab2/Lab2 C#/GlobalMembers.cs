using System;

public static class GlobalMembers
{

	static int Main()
	{
	  TText text = new TText(10);

	  Console.Write("\n");
	  Console.Write("Empty:");
	  Console.Write("\n");
	  Console.Write(text);
	  Console.Write("\n");

	  Console.Write("\n");
	  text.Add("Far far 1 away, 2 behind the 3 word mountains");
	  Console.Write(".Add() x1:");
	  Console.Write("\n");
	  Console.Write(text);
	  Console.Write("\n");

	  Console.Write("\n");
	  text.Add("Far from 4 the countries 5 Vokalia and Consonantia");
	  text.Add("There live 6 the blind texts");
	  text.Add("Separated they 7 live in 8 Bookmarksgrove");
	  text.Add("Right at 9 the coast of the Semantics, a 0 large language ocean");
	  Console.Write(".Add() x4:");
	  Console.Write("\n");
	  Console.Write(text);
	  Console.Write("\n");

	  Console.Write("\n");
	  Console.Write(".Digits(): ");
	  Console.Write(text.Digits());
	  Console.Write("\n");

	  Console.Write("\n");
	  text.Replace("Separated they 7 live in 8 Bookmarksgrove", "hello world");
	  Console.Write(".Replace():");
	  Console.Write("\n");
	  Console.Write(text);
	  Console.Write("\n");

	  Console.Write("\n");
	  Console.Write(".Size(): ");
	  Console.Write(text.Size());
	  Console.Write("\n");

	  Console.Write("\n");
	  text.Remove("There live 6 the blind texts");
	  Console.Write(".Remove():");
	  Console.Write("\n");
	  Console.Write(text);
	  Console.Write("\n");

	  Console.Write("\n");
	  Console.Write(".Size(): ");
	  Console.Write(text.Size());
	  Console.Write("\n");

	  Console.Write("\n");
	  text.Clear();
	  Console.Write(".Clear():");
	  Console.Write("\n");
	  Console.Write(text);
	  Console.Write("\n");

	  return 0;
	}

}