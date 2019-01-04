#ifndef list_h
#define list_h

#include "Node.h"

template <class T>
class List
{
private:
	Node<T> *head;
public:
	List()
	{
		head = 0;	
	};
	void Add(T t)
	{
		Node<T> *n = new Node<T>;
		n->data = t;
		n->next = 0;
		if(head == 0)
		{
			head = n;
		}
		else
		{
			Node<T> *p = head;
			while (p->next!=0)
			{
				p = p->next;	
			}
			p->next = n;
		}
	};
	friend ostream &operator << (ostream &out, const List<T> &l)
	{
		Node<T> *p = l.head;
		while(p!=0)
		{
			out<<p->data<<endl;
			p = p->next;
		}
		return out;
	}
};
#endif
