#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int i=0;
struct node{
    int data;
    node* next;
};

node* head = NULL;

void add(int value){
    node* nptr = new node;
    nptr->data = value;
    nptr->next = head;
    head = nptr;
}

void print(){
    node* tptr = head;
    while(tptr!=NULL){
        cout<<tptr->data<<" ";
        a.push_back(tptr->data);
        tptr = tptr->next;
    }
    cout<<endl;
}


int main(){
add(67);
add(34);
add(78);
add(99);
print();

//this is for print middle element
int x = a.size();
    cout<<a[x/2 -1]<<" ";

}

