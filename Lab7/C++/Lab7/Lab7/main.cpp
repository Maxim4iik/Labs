//
//  main.cpp
//  Lab7
//
//  Created by Maxim Trokhimets on 15.05.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#include <functional>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    std::vector<float> numbers = {};
    vector <float>::iterator start;
    vector <float>::iterator end;
    start = numbers.begin();
    end = numbers.end();
    int repetitions;
    float num;
    
    cout << "Enter the number of repetitions" << endl;
    cin >> repetitions;
    cout << "Enter numbers" << endl;
    for (int i = 0; i < repetitions; i++)
    {
        cin >> num;
        numbers.insert(start, num);
    }
    cout << "" << endl;
    
    
    float sum = accumulate(start, end, 0);
    float mean = float(sum) / numbers.size();
    cout << "mean = " << mean << endl;

    
 for (auto i = start; i !=end;)
    {
        if (*i < 0)
        {
            i = numbers.erase(i);
        }
        else ++i;
    }
    cout << "" << endl;
    
    
    cout << "Reverse order of numbers without negative numbers" << endl;
   for ( int i = 0; i < repetitions; i++)
    {
    cout << numbers[i] <<endl;
    }
    
    return 0;
}
