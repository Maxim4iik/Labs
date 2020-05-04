using System;
using System.Linq;

class MyCounter {
  public static void CountLowerStatic(string s) {
    int count = s.Count(c => char.IsLower(c));
    Console.WriteLine("[static] count: {0}", count);
  }

  public void CountLower(string s) {
    int count = s.Count(c => char.IsLower(c));
    ResultCounted(this, new MyCounterEventArgs(count));
  }

  public event EventHandler<MyCounterEventArgs> ResultCounted;
}

class MyCounterEventArgs : EventArgs {
  public readonly int Count;

  public MyCounterEventArgs(int count) {
    Count = count;
  }
}

class Program {
  private static void OnResultCounted(object sender, MyCounterEventArgs e) {
    Console.WriteLine("[event ] count: {0}", e.Count);
  }

  public static void Main(string[] args) {
    MyCounter counter = new MyCounter();
    counter.ResultCounted += OnResultCounted;

    while (true) {
      Console.Write("enter a string (empty to exit): ");
      string line = Console.ReadLine();

      if (line == "") {
        Console.WriteLine("bye");
        break;
      }

      MyCounter.CountLowerStatic(line);
      counter.CountLower(line);
    }
  }
}
