#include<iostream>
#include<stdlib.h>

using namespace std;

class ListNode{
public:
	int val;
	ListNode * next  = NULL;

	ListNode(int data){
		val = data;
	}
};


static ListNode * insertInto(ListNode * head,int data){
	ListNode * newNode = new ListNode(data);
	//cout<<"val: "<<newNode->val;
	
	ListNode * temp = head;
	if(head!=NULL){
		while(temp->next!= NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	} else{
		head = newNode;
	}

	return head;
}

  int sizeOfList(ListNode * head){
      	int count = 0;
      	while(head){
      		count++;
      		head = head->next;
      	}
      	return count;
	  }

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode* result = NULL;
	if(l1 == NULL)
	return l2;
	if(l2 == NULL)
	return l1;
	else{
		if(l1->val <= l2->val){
			result = l1;
			result->next = mergeTwoLists(l1->next,l2);
		}
		else{
			result =l2;
			result->next = mergeTwoLists(l1,l2->next);
		}
	}
	return result;
}
	  
int main(){
	ListNode * arr1 =NULL;
	ListNode * arr2 =NULL;// (ListNode *)malloc(sizeof(ListNode));//new ListNode(2);
//	temp->val = 2;
//	cout<<temp->val;
//	
	arr1 = insertInto(arr1,1);
	arr1 = insertInto(arr1,2);
	arr1 = insertInto(arr1,4);
	arr1 = insertInto(arr1,5);

	arr2 = insertInto(arr2,1);
	arr2 = insertInto(arr2,3);
	arr2 = insertInto(arr2,4);

	ListNode * mergedNodes = mergeTwoLists(arr1,arr2);

	while(mergedNodes!=NULL){
		cout<<"val: "<<mergedNodes->val<<endl;
		mergedNodes = mergedNodes->next;
	}
	
	//cout<<sizeOfList(temp);
	
	
}
