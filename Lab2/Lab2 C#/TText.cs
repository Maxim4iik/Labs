using System;

//
//  TText.h
//  Lab2
//
//  Created by Maxim Trokhimets on 04.03.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//


public class TText
{
  private TLine[] arr;
  private int capacity;
  private int size;

  public TText(int cap)
  {
	arr = Arrays.InitializeWithDefaultInstances<TLine>(cap);
	capacity = cap;
	size = 0;
  }

  public TText(TText c)
  {
	arr = Arrays.InitializeWithDefaultInstances<TLine>(c.capacity);
	capacity = c.capacity;
	size = c.size;
	for (int i = 0; i < c.size; i++)
	{
	  arr[i] = c.arr[i];
	}
  }

  public void Add(TLine s)
  {
	if (size == capacity)
	{
	  Console.Write("text container is full");
	  Console.Write("\n");
	  return;
	}
	arr[size++] = s;
  }

  public void Remove(TLine s)
  {
	int i;
	for (i = 0; i < size; i++)
	{
	  if (arr[i] == s)
	  {
		  break;
	  }
	}

	if (i == size)
	{
		return;
	}

	for (int j = i; j < size - 1; j++)
	{
	  arr[j] = arr[j + 1];
	}

	size--;
  }

  public void Replace(TLine a, TLine b)
  {
	for (int i = 0; i < size; i++)
	{
	  if (arr[i] == a)
	  {
		arr[i] = b;
		break;
	  }
	}
  }

  public void Clear()
  {
	size = 0;
  }

  public int Size()
  {
	return size;
  }

  public TLine Digits()
  {
	TLine ret = "";
	for (int i = 0; i < size; i++)
	{
	  ret += arr[i].Digits();
	}
	return new TLine(ret);
  }

  public static ostream operator << (ostream s, TText c)
  {
	s << "TText(" << "\n";
	for (int i = 0; i < c.size; i++)
	{
	  s << "  " << c.arr[i] << "\n";
	}
	s << ")";
	return s;
  }
}

