#ifndef CIRCLIST_H
#define CIRCLIST_H
#include <iostream>
template<typename T>
class CircList
{
    public:
        CircList() {tail = new Node();}
        CircList(T * segment);
        virtual ~CircList();
        void add(T * segment);
        T & gettail() {return *(tail->value);}
        int count;
    protected:
    private:
        struct Node {
            T * value;
            Node * next;
            Node * previous;
        };
        Node * tail;
};

template<typename T>
CircList<T>::CircList(T * segment)
{
    tail = new Node();
    tail->value = segment;
    tail->next = tail;
    tail->previous = tail;
    count = 1;
}

template<typename T>
void  CircList<T>::add(T * segment)
{
    Node * newnode = new Node();
    newnode->next = tail->next;
    newnode->previous = tail;
    newnode->value = segment;
    tail->next = newnode;
    tail = newnode;
    count++;
}

template<typename T>
CircList<T>::~CircList()
{
    Node * temp = new Node();
    if(tail == NULL || temp == NULL) return;
    temp->next = tail->next;
    delete tail;
    for(int i = count; i > 1; i-- )
    {
        temp->previous = temp->next;
        temp->next = temp->previous->next;
        delete temp->previous;
    }
    delete temp;
}
#endif // CIRCLIST_H
