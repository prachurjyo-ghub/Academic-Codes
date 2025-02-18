#include<bits/stdc++.h>
using namespace std;

    struct Node {
    int data;       
    Node* next;     
};
Node* head = nullptr;
void creat(int x) {
    Node* newNode = new Node(); 
    newNode->data = x;         
    newNode->next = head;      
    head = newNode;           
}

void insertAtLast(int x) {
    Node* newNode = new Node(); 
    newNode->data = x;          
    newNode->next = nullptr;    

    
    if (head == nullptr) {
        head = newNode;
        return;
    }

    
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next; 
    }
    temp->next = newNode; 
}
void display() {
    Node* temp = head; 
    while (temp != nullptr) {
        cout << temp->data << "  "; 
        temp = temp->next; 
    }
    cout << endl; 
}

int main(){
    creat(5); 
    creat(4); 
    creat(3); 
    creat(2);
    creat(1); 
    cout<<"Before Inserting 9 at last : \n";
    display();

    insertAtLast(6);
    display();
    cout<<"After Inserting 9 at last : \n";

}