#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void printTheLinkedList(node * &head){
    node *temp = head;
    
    while(temp!=NULL){
        cout<<" "<<temp->data;
        temp=temp->next;
    }
}

void Insertion(node *&head , int data){
    node* temp = new node(data);
    if(head==NULL){
        head=temp;
        return;
    }
    temp->next = head;
    head=temp;
}
void InsertionEnd(node *&head , int data){
    node* temp = new node(data);
    node *end=head;
    if(head==NULL){
        head=temp;
        return;
    }
    while(end->next!=NULL){
        end=end->next;

    }
    end->next=temp;
}


void insertAtposition(node * &head , int position,int data){
    

    node * temp=new node(data);
    node *var = head;
    while(var->data!=position){
        var=var->next;
        if(var==NULL){
            cout<<"Location doenot exist"<<endl;
            return;
        }
    }

    temp->next=var->next;
    var->next=temp;


}



int main(){

    node *head=NULL;

    Insertion(head,3);
    Insertion(head,10);
    Insertion(head,20);
    Insertion(head,30);
    Insertion(head,40);
    insertAtposition(head,4,45);
    InsertionEnd(head,50);
    printTheLinkedList(head);

    return 0;
}