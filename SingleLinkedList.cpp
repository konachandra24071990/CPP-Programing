#include <iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
};

class SLL{
    private:
    struct node *head;
    public:
    SLL(){
        head = NULL;
    }
    void AddElement(int data);
    void DeleteElement(int data);
    void AddElementFront(int data);
    void DeleteElementFront(void);
    void DispElements(void);
    void ReverseList(void);
    void insert(int data, int pos);
};
void SLL::ReverseList(void){
    struct node *temp,*prev = NULL, *next = NULL;
    temp = head;
    while(temp != NULL){
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    head = prev;;

}
void SLL::DeleteElementFront(void){
    struct node *temp, *prev = NULL;
    temp = head;
    cout<<"deleted element = "<<temp->data<<endl;
    temp = temp->next;
    head = temp;
}
void SLL::DeleteElement(int data){
    struct node *temp, *prev = NULL;
    temp = head;
    while(temp->data != data){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    cout<<"deleted element = "<<data<<endl;

}
void SLL::AddElementFront(int data){

    struct node *NewNode = new struct node, *temp;
    NewNode->data = data;
    NewNode->next = NULL;

    if(head == NULL){
        head = NewNode;
    }
    else{
        NewNode->next = head;
        head = NewNode;
    }
}
void SLL::insert(int data, int pos){    
    struct node *NewNode = new struct node,*temp = head,*prev = NULL; int count = 1;
    NewNode->data = data;
    NewNode->next = NULL;
    while(count < pos){
        prev = temp;
        temp = temp->next;  
        count++;      
    }
    prev->next = NewNode;
    NewNode->next = temp;
}
void SLL::DispElements(void){
    struct node *temp;int LenghtOfList = 0;
    temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<" ";
        LenghtOfList++;
        temp = temp->next;
    }
    cout<<temp->data<<endl;
    LenghtOfList++;
    cout<<"lenght of list = "<<LenghtOfList<<endl;
}
void SLL::AddElement(int data){

    struct node *NewNode = new struct node, *temp;
    NewNode->data = data;
    NewNode->next = NULL;

    if(head == NULL){
        head = NewNode;
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = NewNode;
    }
}
int main(void){

    cout<<"single linked list"<<endl;
    SLL obj;
    obj.AddElement(10);
    obj.AddElement(20);
    // obj.AddElementFront(5);
    obj.DispElements();
    obj.ReverseList();
    obj.DispElements();
    obj.AddElement(30);
    obj.insert(40,2);
    obj.AddElementFront(1);
    obj.ReverseList();
    obj.DispElements();
    obj.DeleteElement(40);
    obj.DispElements();
    obj.DeleteElement(30);
    obj.DispElements();
    obj.DeleteElementFront();
    obj.DispElements();
    return 0;
}