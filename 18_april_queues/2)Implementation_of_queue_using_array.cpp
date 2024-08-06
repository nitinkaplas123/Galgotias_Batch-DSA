https://www.geeksforgeeks.org/problems/implement-queue-using-array/1

              























              

C++ 
Code-:
//Function to push an element x in a queue.
void MyQueue :: push(int x)
{
       arr[rear]=x;
       rear++;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
       if(rear==front) return -1;
       int ans=arr[front];
       front++;
       return ans;
}



Java -:
Code-:
//Function to push an element x in a queue.
void push(int x)
{
	    arr[rear]=x;
	    rear++;
} 

//Function to pop an element from queue and return that element.
int pop()
{
	   if(front==rear) return -1;
	   int ans=arr[front];
	   front++;
	   return ans;
} 