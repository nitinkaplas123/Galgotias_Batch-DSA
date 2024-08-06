https://www.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1

Solution 1-:
Steps-:
1)Make a min heap.
2)Add first K head nodes into pq.
3)Now make a head of linked list and go forward.

Code-: Time Complexity -> O(KlogK + (N-K)log(k)) -> O(NlogK)


struct comp
{
    bool operator()(Node* a,Node* b)
    {
        return (a->data>b->data);
    }
};
class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
        priority_queue<Node*,vector<Node*>,comp>pq;
        for(int i=0;i<K;i++)
        {
            pq.push(arr[i]);
        }
        
        Node* dummy=new Node(-1);
        Node* temp=dummy;
        while(pq.empty()==false)
        {
            Node* curr=pq.top();
            pq.pop();
            
            
            temp->next=curr;
            temp=curr;
            
            if(curr->next!=NULL)
            pq.push(curr->next);
        }
        temp->next=NULL;
        return dummy->next;
    }
};