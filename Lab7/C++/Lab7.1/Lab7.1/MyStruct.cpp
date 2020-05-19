#include "MyStruct.h"

namespace Lab_7
{

	float Node::getValue() const
	{
		return value;
	}

	void Node::setValue(float value)
	{
		value = value;
	}

	Node *Node::getNext() const
	{
		return next;
	}

	void Node::setNext(Node *value)
	{
		next = value;
	}

	int MyStruct::getSize() const
	{
		return size;
	}

	void MyStruct::setSize(int value)
	{
		size = value;
	}

	Node *MyStruct::getHead() const
	{
		return head;
	}

	void MyStruct::setHead(Node *value)
	{
		head = value;
	}

	Node *MyStruct::getElem() const
	{
		return elem;
	}

	void MyStruct::setElem(Node *value)
	{
		elem = value;
	}

	void MyStruct::push(float val)
	{
		Node *newNode = new Node();
		newNode->setValue(val);

		if (getHead() == nullptr)
		{
		  setHead(newNode);
		}
		 else
		 {
		  newNode->setNext(getHead());
		  setHead(newNode);
		 }
	}

	int MyStruct::count()
	{
	Node *temp = getHead();
	int n = 0;
	float sum = 0;
	while (temp != nullptr)
	{
		sum += temp->getValue();
		temp = temp->getNext();
		if (temp->getValue() > (sum / (getSize() + 1)))
		{
					n += 1;
		}
				temp = temp->getNext();
	}
			return n;
	}

	void MyStruct::exchange()
	{
		Node *temp = getHead();
		while (temp != nullptr)
		{
			if (temp->getValue() < 0)
			{
				temp->setValue(0);
			}
			temp = temp->getNext();
		}
	}

	void MyStruct::output()
	{
		Node *temp = getHead();
		while (temp != nullptr)
		{

			std::wcout << temp->getValue() << L" ";
			temp = temp->getNext();
		}
	}
}
