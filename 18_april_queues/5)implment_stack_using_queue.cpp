Question -> https://www.geeksforgeeks.org/problems/stack-using-two-queues/1


























C++ 
Code-:
//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
    q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    if(q1.size()==0) return -1;
    
    int ans=q1.back();
    while(q1.size()>1)
    {
        int val=q1.front();
        q1.pop();
        q2.push(val);
    }
    q1.pop();
    
    while(q2.empty()==false)
    {
        int val=q2.front();
        q2.pop();
        q1.push(val);
    }
    return ans;
}



Java 
Code-:

class Queues
{
    Queue<Integer> q1 = new LinkedList<Integer>();
    Queue<Integer> q2 = new LinkedList<Integer>();
    
    //Function to push an element into stack using two queues.
    void push(int a)
    {
	    q1.add(a);	
    }
    
    //Function to pop an element from stack using two queues. 
    int pop()
    {
	    if(q1.size()==0) return -1;
	   
	    while(q1.size()>1)
	    {
	        int val=q1.remove();
	        q2.add(val);
	    }
	    int ans=q1.remove();
	    
	    while(q2.isEmpty()==false)
	    {
	        int val=q2.remove();
	        q1.add(val);
	    }
	    return ans;
    }
}
