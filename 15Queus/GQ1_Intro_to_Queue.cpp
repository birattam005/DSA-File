// CPP code to illustrate Queue operations in STL

#include <iostream>
#include <queue>

using namespace std;

// Print the queue
void print_queue(queue<int> q)
{
	queue<int> temp = q;
	while (!temp.empty()) {
		cout << temp.front()<<" ";
		temp.pop();
	}
	cout << '\n';
}

// Driver Code
int main()
{
	queue<int> q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);

	cout << "The first queue is : ";
	print_queue(q1);
	
	queue<int> q2;
	q2.push(4);
	q2.push(5);
	q2.push(6);

	cout << "The second queue is : ";
	print_queue(q2);
	
	
	q1.swap(q2);
		
	cout << "After swapping, the first queue is : ";
	print_queue(q1);
	cout << "After swapping the second queue is : ";
	print_queue(q2);
	
	cout<<q1.empty(); //returns false since q1 is not empty

	return 0;
}
/*

The time complexity and definition of the following functions are as follows:

queue::empty()	    O(1)
queue::size()	    O(1)
queue::emplace()	O(1)
queue::front()	    O(1)
queue::back()	    O(1)
queue::push(g) 	    O(1)
queue::pop() 	    O(1)


Method	Definition
queue::empty()	Returns whether the queue is empty. It return true if the queue is empty otherwise returns false.
queue::size()	Returns the size of the queue.
queue::swap()	Exchange the contents of two queues but the queues must be of the same data type, although sizes may differ.
queue::emplace()	Insert a new element into the queue container, the new element is added to the end of the queue.
queue::front()	Returns a reference to the first element of the queue.
queue::back()	Returns a reference to the last element of the queue.
queue::push(g) 	Adds the element ‘g’ at the end of the queue.
queue::pop() 	Deletes the first element of the queue.
*/