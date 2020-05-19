#pragma once

#include <iostream>


namespace Lab_7
{
	class Node
	{
	private:
		float value = 0;
		Node *next;

	public:
		float getValue() const;
		void setValue(float value);
		Node *getNext() const;
		void setNext(Node *value);
	};
	class MyStruct
	{
	private:
		int size = 0;
		Node *head;
		Node *elem;

		int getSize() const;
		void setSize(int value);
		Node *getHead() const;
		void setHead(Node *value);
		Node *getElem() const;
		void setElem(Node *value);
	public:
		void push(float val);

int count();


		void exchange();

		void output();
	};
}
