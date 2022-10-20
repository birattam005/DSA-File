// The functions associated with stack are: 
// empty() – Returns whether the stack is empty – Time Complexity : O(1) 
// size() – Returns the size of the stack – Time Complexity : O(1) 
// top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
// push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
// pop() – Deletes the top most element of the stack – Time Complexity : O(1) 


#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int> stack;
	stack.push(21);
	stack.push(22);
	stack.push(24);
	stack.push(25);
	
		stack.pop();
	stack.pop();

	while (!stack.empty()) {
		cout << stack.top() <<" ";
		stack.pop();
	}
}

/*
Code Explanation:

1> Include the iostream header file or <bits/stdc++.h> in our code to use its functions.
2> Include the stack header file in our code to use its functions if already included <bits/stdc++.h> then no need of stack header file because it has already inbuilt function in it.
3> Include the std namespace in our code to use its classes without calling it.
4> Call the main() function. The program logic should be added within this function.
5> Create a stack to store integer values.
6> Use the push() function to insert the value 21 into the stack.
7> Use the push() function to insert the value 22 into the stack.
8> Use the push() function to insert the value 24 into the stack.
9> Use the push() function to insert the value 25 into the stack.
10> Use the pop() function to remove the top element from the stack, that is, 25. The top element now becomes 24.
11> Use the pop() function to remove the top element from the stack, that is, 24. The top element now becomes 22.
12> Use a while loop and empty() function to check whether the stack is NOT empty. The ! is the NOT operator.
13> Printing the current contents of the stack on the console.
14> Call the pop() function on the stack.
15> End of the body of the while loop.
16> End of the main() function body.

*/