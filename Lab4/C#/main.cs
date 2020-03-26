using System;

class MainClass {
  class Bar {
    private char[] Data;

    public Bar() {
      this.Data = new char[0];
    }

    public Bar(char[] d) {
      this.Data = (char[]) d.Clone();
    }

    public Bar(Bar b) : this(b.Data) {
    }

    public int Length() {
      return Data.Length;
    }

    public char[] GetData() {
      return (char[]) Data.Clone();
    }

    public static Bar operator +(Bar a, Bar b) {
      Bar ret = new Bar(new char[a.Length() + b.Length()]);
      a.Data.CopyTo(ret.Data, 0);
      Array.Copy(b.Data, 0, ret.Data, a.Length(), b.Length());
      return ret;
    }

    public static Bar operator *(Bar a, int x) {
      Bar ret = new Bar(new char[x * a.Length()]);
      for (int i = 0; i < a.Length(); i++) {
        for (int j = 0; j < x; j++) {
          ret.Data[i * x + j] = a.Data[i];
        }
      }
      return ret;
    }

    public override string ToString() {
      return new string(Data);
    }
  }

  public static void Main(string[] args) {
    Console.WriteLine("hello world");

    Bar world = new Bar("world".ToCharArray());

    Bar CB1 = new Bar();
    Bar CB2 = new Bar("hello".ToCharArray());
    Bar CB3 = new Bar(world);

    CB3 = CB3 * 2;
    CB1 = CB2 + CB3;

    Console.WriteLine(CB1);
  }
}