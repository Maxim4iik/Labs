//
//  Class.h
//  Lab2
//
//  Created by Maxim Trokhimets on 04.03.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#ifndef Class_h
#define Class_h

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

class TLine {
private:
  char *value;

public:
    TLine() {
      value = nullptr;
    }

  TLine(const char *s) {
    value = new char[strlen(s) + 1];
    strcpy(value, s);
  }

  TLine(const TLine& c) {
    value = new char[strlen(c.value) + 1];
    strcpy(value, c.value);
  }

  ~TLine() {
    if (value) delete value;
  }

  TLine& operator =(const TLine& c) {
    if (value) delete value;
    value = new char[strlen(c.value) + 1];
    strcpy(value, c.value);
    return *this;
  }

  bool operator==(const TLine& c) const {
    if (!value || !c.value) return !value && !c.value;
    return !strcmp(value, c.value);
  }

  TLine& operator+=(char c) {
    char *oldValue = value;
    int len = oldValue ? strlen(oldValue) : 0;

    value = new char[len + 2];

    if (oldValue) strcpy(value, oldValue);

    value[len] = c;
    value[len + 1] = '\0';

    if (oldValue) delete oldValue;

    return *this;
  }

  TLine& operator+=(const TLine& c) {
    char *oldValue = value;
    int len = oldValue ? strlen(oldValue) : 0;

    value = new char[len + c.Length() + 1];

    if (oldValue) strcpy(value, oldValue);

    if (c.value) {
      strcat(value, c.value);
    }

    if (oldValue) delete oldValue;

    return *this;
  }

  int Length() const {
    return value ? strlen(value) : 0;
  }

  TLine Digits() const {
    if (!value) return "";

    TLine ret = "";

    for (int i = 0; value[i] != '\0'; i++) {
      if (isdigit(value[i])) {
        ret += value[i];
      }
    }

    return ret;
  }

  friend ostream& operator<<(ostream& s, const TLine& c) {
    return s << "TLine(value=" << c.value << ")";
  }
};



#endif /* Class_h */
