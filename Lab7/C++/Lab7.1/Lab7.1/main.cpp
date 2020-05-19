//
//  main.cpp
//  Lab7.1
//
//  Created by Maxim Trokhimets on 19.05.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#include "main.h"
#include "MyStruct.h"

namespace Lab_7
{
using namespace std;
    void main::Main(std::vector<std::wstring> &args)
    {
        auto node = new MyStruct();
        float el;
        int n;
        float add;
        std::wcout << L"Enter first element: " << std::endl;
        cin >> el;
        node = new MyStruct();
        node->push(el);

        int size = 0;
        std::wcout << L"Enter number of elements in your list: " << std::endl;
        cin >> size;

        std::wcout << L"Enter elements: \n";
        for (int i = 0; i < size; i++)
        {
            cin >> add;
                node->push(add);
        }

        cout << (L"List: ") << std::endl;
        node->output();

        n = node->count();
        std::wcout << StringHelper::formatSimple(L"\n\nNumbers > average arithmetical: {0}", n) << std::endl;

        node->exchange();
        std::wcout << (L"\nNew list: ") << std::endl;
        node->output();
        delete node;
    }
}
