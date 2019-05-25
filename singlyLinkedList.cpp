 #include<iostream>
#include<malloc.h>
using namespace std;

struct Node{
 	public:
 	int data;
 	Node * next;
 }*head=NULL;

 void insert(int data){
 	Node * temp = (Node*) malloc(sizeof(Node));
 	temp->data = data;
 	temp->next = head;
 	head = temp;
 }

 void display(){
 	Node * temp = head;
 	while(temp){
 		cout<<temp->data<<ends;
 		temp = temp->next;
 	}
 }

 int main(){
 	int t,data;
 	cin>>t;
 	while(t-->0){
 		cin>>data;
 		insert(data);
 	}

 	display();
 }
