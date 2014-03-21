#include <iostream>
 
#include "que.h"
using namespace std; 

int main()
{
        
        
        NodeQueue<int> Queue;
        int n;
		int val;
		for (int id = 0; id< n; id++)
		{
			cout<<"Enter value:";
			cin>>val;
		    Queue.enqueue(val);
		}
        
        
        
        Queue.print();

        system("pause");
}