using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace Lab_7
{
    internal class Node
    {
        public float value { get; set; }
        public Node next { get; set; }
    }
    class MyStruct
    {
        private int size { get; set; }
        private Node head { get; set; }
        private Node elem { get; set; }
        public void push(float val)
        {
            Node newNode = new Node() { value = val };

            if (head == null)
            {
              head = newNode; 
            }
             else
              {
              newNode.next = head;
              head = newNode; 
               }
        }

public int count()  
{  
    Node temp = head;  
    int n = 0;
    float sum = 0;  
    while (temp != null)  
    {  
        sum += temp.value;  
        temp = temp.next; 
        if (temp.value > (sum/(size+1)))
                {
                    n += 1;
                }
                temp = temp.next; 
    }  
            return n;
}  


        public void exchange()
        {
            Node temp = head;
            while (temp != null)
            {
                if (temp.value < 0)
                {
                    temp.value = 0;
                }
                temp = temp.next;
            }
        }

        public void output()
        {
            Node temp = head;
            while (temp != null)
            {
                Write(temp.value.ToString() + " ");
                temp = temp.next;
            }
        }
    }
}