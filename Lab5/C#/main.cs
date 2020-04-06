using System;

class MainClass {

  class MyString {
    protected string Value;

    public MyString(string Value) {
      this.Value = Value;
    }

    public int GetLength() {
      return Value.Length;
    }
  }

  class MyLetterString : MyString {
    public MyLetterString(string Value) : base(Value) {
    }

    public void Shift() {
      Value = Value[Value.Length - 1] + Value.Substring(0, Value.Length - 1);
    }

    public string GetValue() {
      return Value;
    }
  }

  public static void Main(string[] args) {
    Console.WriteLine("hello world");

    MyString s1 = new MyString("hello");
    Console.WriteLine("s1.GetLength(): " + s1.GetLength());

    Console.WriteLine();

    MyLetterString s2 = new MyLetterString("world");
    Console.WriteLine("s2.GetLength(): " + s2.GetLength());

    Console.WriteLine("s2.GetValue(): " + s2.GetValue());
    Console.WriteLine("s2.Shift()...");
    s2.Shift();
    Console.WriteLine("s2.GetValue(): " + s2.GetValue());
  }
}
