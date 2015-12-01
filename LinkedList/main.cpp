
#include <iostream>
using namespace std;
class list{
public:
	list *next;
	int data;
};

list* inserttop(list* head, int d)
{
	if (head==NULL)
	{
		list* l=new list;
		head=l;
		l->data=d;
		l->next=NULL;
		return head;
	}
	else {
		list* temp;
		temp=head;
	while (temp->next!=NULL) {
		temp=temp->next;
	}
		list* l=new list;
		temp->next=l;
		l->data=d;
		l->next=NULL;
		return head;		
	}		
}
list* insertbeg(list* head, int d)
{
	list* l=new list;
		l->data=d;
		l->next=head;
	    head = l;
		return head;		
}
void printlist(list* head)
{
	list* temp;
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}	
		  
}
list* del(list* head)
{
	list *temp =head;
	head=head->next;
	delete temp;
	return head;
}


int main() {
	list* head=NULL;
	head=inserttop(head,10);cout<<endl;printlist(head);cout<<endl;
	head=inserttop(head,20);cout<<endl;printlist(head);cout<<endl;
	head=inserttop(head,30);cout<<endl;printlist(head);cout<<endl;
	head=inserttop(head,40);cout<<endl;printlist(head);cout<<endl;
	head=inserttop(head,50);cout<<endl;printlist(head);cout<<endl;
	head=insertbeg(head,60);cout<<endl;printlist(head);cout<<endl;
	head=insertbeg(head,70);cout<<endl;printlist(head);cout<<endl;
	head=insertbeg(head,80);cout<<endl;printlist(head);cout<<endl;
	head=del(head);printlist(head);
	cout<<endl;
	head=del(head);printlist(head);
	
	
    
}
