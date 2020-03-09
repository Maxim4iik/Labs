//
//  Class.h
//  Lab2
//
//  Created by Maxim Trokhimets on 04.03.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

public class TLine : System.IDisposable
{
  private string value;

	public TLine()
	{
	  value = null;
	}

  public TLine(string s)
  {
	value = new string(new char[s.Length]);
	value = s;
  }

  public TLine(TLine c)
  {
	value = new string(new char[c.value.Length]);
	value = c.value;
  }

  public void Dispose()
  {
	if (value)
	{
		if (value != null)
		{
			value.Dispose();
		}
	}
  }

  public TLine CopyFrom(TLine c)
  {
	if (value)
	{
		value = null;
	}
	value = new string(new char[c.value.Length]);
	value = c.value;
	return this;
  }

  public static bool operator == (TLine ImpliedObject, TLine c)
  {
	if (!ImpliedObject.value || !c.value)
	{
		return !ImpliedObject.value && !c.value;
	}
	return !string.Compare(ImpliedObject.value, c.value);
  }

  public static TLine operator += (char c)
  {
	string oldValue = value;
	int len = oldValue ? oldValue.Length : 0;

	value = new string(new char[len + 2 - 1]);

	if (oldValue)
	{
		value = oldValue;
	}

	value = StringFunctions.ChangeCharacter(value, len, c);
	value = StringFunctions.ChangeCharacter(value, len + 1, '\0');

	if (oldValue)
	{
		oldValue = null;
	}

	return this;
  }

  public static TLine operator += (TLine c)
  {
	string oldValue = value;
	int len = oldValue ? oldValue.Length : 0;

	value = new string(new char[len + c.Length()]);

	if (oldValue)
	{
		value = oldValue;
	}

	if (c.value)
	{
	  value += c.value;
	}

	if (oldValue)
	{
		oldValue = null;
	}

	return this;
  }

  public int Length()
  {
	return value ? value.Length : 0;
  }

  public TLine Digits()
  {
	if (!value)
	{
		return "";
	}

	TLine ret = "";

	for (int i = 0; value[i] != '\0'; i++)
	{
	  if (char.IsDigit(value[i]))
	  {
		ret += value[i];
	  }
	}

	return new TLine(ret);
  }

  public static ostream operator << (ostream s, TLine c)
  {
	return s << "TLine(value=" << c.value << ")";
  }
}



