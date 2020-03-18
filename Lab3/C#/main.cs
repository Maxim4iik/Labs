using System;

class MainClass {
  class Bar {
    private const string Glasnye = "aeiouAEIOU";

    private char[,] Arr = {
      {'M', 'o', 'n', 't', 'h'},
      {'B', 'r', 'e', 'a', 'd'},
      {'W', 'o', 'r', 'l', 'd'},
      {'R', 'a', 't', 'i', 'o'},
      {'A', 'p', 'p', 'l', 'e'},
    };

    public string this[int x]
    {
      get
      {
        int len = Arr.GetLength(0);
        string ret = "";
        if (x == 0) {
          for (int i = 0; i < len; i++) {
            ret += Arr[i, i];
          }
        } else if (x == 1) {
          for (int i = 0; i < len; i++) {
            ret += Arr[i, len - i - 1];
          }
        } else {
          return "invalid index";
        }
        return ret;
      }
    }

    public int GlasnyeCount
    {
      get
      {
        int ret = 0;
        foreach (char c in Arr) {
          if (Glasnye.IndexOf(c) != -1) {
            ret++;
          }
        }
        return ret;
      }
    }
  }

  public static void Main(string[] args) {
    Bar bar = new Bar();
    Console.WriteLine("диагональ 1 = {0}", bar[0]);
    Console.WriteLine("диагональ 2 = {0}", bar[1]);
    Console.WriteLine("Гласные = {0}", bar.GlasnyeCount);
  }
}
