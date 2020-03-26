//
//  TText.h
//  Lab2
//
//  Created by Maxim Trokhimets on 04.03.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#ifndef TText_h
#define TText_h
#include <iostream>
#include <cstring>
#include <cctype>
#include "TLine.h"
using namespace std;

class TText {
private:
  TLine *arr;
  int capacity;
  int size;

public:
  TText(int cap) {
    arr = new TLine[cap];
    capacity = cap;
    size = 0;
  }

  TText(const TText& c) {
    arr = new TLine[c.capacity];
    capacity = c.capacity;
    size = c.size;
    for (int i = 0; i < c.size; i++) {
      arr[i] = c.arr[i];
    }
  }

  void Add(const TLine& s) {
    if (size == capacity) {
      cout << "text container is full" << endl;
      return;
    }
    arr[size++] = s;
  }

  void Remove(const TLine& s) {
    int i;
    for (i = 0; i < size; i++) {
      if (arr[i] == s) break;
    }

    if (i == size) return;

    for (int j = i; j < size - 1; j++) {
      arr[j] = arr[j + 1];
    }

    size--;
  }

  void Replace(const TLine& a, const TLine& b) {
    for (int i = 0; i < size; i++) {
      if (arr[i] == a) {
        arr[i] = b;
        break;
      }
    }
  }

  void Clear() {
    return 0;
  }

  int Size() const {
    return size;
  }

  TLine Digits() const {
    TLine ret = "";
    for (int i = 0; i < size; i++) {
      ret += arr[i].Digits();
    }
    return ret;
  }

  friend ostream& operator<<(ostream& s, const TText& c) {
    s << "TText(" << endl;
    for (int i = 0; i < c.size; i++) {
      s << "  " << c.arr[i] << endl;
    }
    s << ")";
    return s;
  }
};

#endif /* TText_h */
