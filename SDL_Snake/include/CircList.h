#ifndef CIRCLIST_H
#define CIRCLIST_H
#include <iostream>
template<typename T>
class CircList
{
    public:
        CircList() {tail = new Node();}
        CircList(T * segment);
        virtual ~CircList() {delete tail;}
        void add(T * segment);
    protected:
    private:
        struct Node {
            T * value;
            T * next;
            T * previous;
        };
        Node * tail;
        T * gettail();
};
template<typename T>
CircList<T>::CircList(T * segment)
{
    tail = new Node();
    tail->value = segment;
    tail->next = segment;
    tail->previous = segment;
}

template<typename T>
void  CircList<T>::add(T * segment)
{
    std::cout << "Segment: " << segment;
    Node * newnode = new Node();
    newnode->next = tail->next;
    newnode->previous = tail->value;
    newnode->value = segment;
    tail->next = newnode->value;
    tail = newnode;
    std::cout << std::endl << "New tail.value : " << tail->value << std::endl;
}
#endif // CIRCLIST_H
