#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
    //    Node * temp = (Node*)malloc(sizeof(Node));
    //    temp->data = data;
    //    temp->next = head;
        Node * temp = new Node(data);
        temp->next = head;
       head = temp;
       return head;
      }

      void display(Node *head)
      {
          Node *start=head;
          cout<<endl;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
      
      int sizeOfList(Node * head){
      	int count = 0;
      	while(head){
      		count++;
      		head = head->next;
      	}
      	return count;
	  }

      Node* deletedHead(Node * head){
      	if(head==NULL){
      		cout<<"Node is already empty";
      	} else {
      		Node * temp = head;
      		temp = temp->next;
      		head = temp;
      	}
      //	cout<<endl;
      	return head;
      }

      Node* deleteTail(Node * head){
      	if(head == NULL){
      		cout<<"Node is null";
      	} else {
      		Node * p = head;
      		Node * q = p->next;
      		while(q->next !=NULL){
      			p = p->next;
      			q = q->next;
      		}
      	//	cout<<endl;	
      		// cout<<p->data;
      		// cout<<q->data;

      		p->next = NULL;
      	}
      	return head;
      }

      Node* deletePos(Node * head,int pos){
      	Solution mlist;
      	int listSize  = mlist.sizeOfList(head);
      	//cout<<endl<<listSize<<endl;
      	
      	if(head==NULL){
      		cout<<"Linked list is empty";
      	} else {
      		if(pos == 1) {
      			head = mlist.deletedHead(head);
			  } else if(pos == listSize){
			  	head = mlist.deleteTail(head);
			  }
			  else {
			  		Node * p = head;
      				Node * q = p->next;
      				while(pos-->2){
		      			p = p->next;
		      			q = q->next;
      				} p->next = q->next;
			  }
      	}
      	return head;
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    //cout<< mylist.sizeOfList(head);
    
	mylist.display(head);

	head = mylist.deletedHead(head);
	mylist.display(head);

	head = mylist.deleteTail(head);
	mylist.display(head);

	head = mylist.deletePos(head,2);
	mylist.display(head);
		
}
