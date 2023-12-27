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
        tptr = tptr->next;
        if(tptr == NULL){
            cout<<"Not Circular";
            return;
        }
    }
    //cout<<endl;
    cout<<"circular";
}


int main(){
add(2);
add(3);
add(4);
add(5);
print();


}


