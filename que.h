#ifndef _QUEUE_H_
#define _QUEUE_H_
 
#include <iostream>
#include <string>
 
template<class T>
/** The Queue class*/

class NodeQueue
{
public:
        NodeQueue():head(0), tail(0)
        {
        }
 
        ~NodeQueue()
        {
             while(head)
             {
                 tail=head->next;
                 delete head;
                 head=tail;
             }
        }
 /** function that adds an element to the queue */

        void enqueue(T val)
        {
                Node* Temp=new Node;
                Temp->elem=val;
                if(head==0)
                {
                        head=Temp;
                        tail=Temp;
                        return;
                }
                tail->next=Temp;
                tail=Temp;
        }
 
        void dequeue()
/** function that delete an element from the queue */
        {
                if (empty())
                {
                        throw std::string("Queue is empty");
                }
                Node* delPtr=head;
                std::cout<<"Element "<< head->elem <<" is deleted from the queue\n";
                head=head->next;
                delete delPtr;
        }
 
        const T& front() const
        {
                if (empty())
                {
                        throw std::string("Queue is empty");
                }
                return head->elem;
        }
 
/** function that prints elements in the queue */
        void print() const
        {
                if (empty())
                {
                        throw std::string("Queue is empty");
                }
                for(Node* ptr=head; ptr!=0; ptr=ptr->next)
                        std::cout<<ptr->elem<<' ';
                std::cout<<'\n';
        }
 
/** function that checks if the queue was empty */
        bool empty() const
        {
                return head==0;
        }
private:
        struct Node
        {
                Node():next(0), elem(0)
                {
                }
                Node* next;
                T elem;
        };
        Node* head;
        Node* tail;
};
 
#endif