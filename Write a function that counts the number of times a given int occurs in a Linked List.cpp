#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int cnt=0;
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

void print(int n){
    node* tptr = head;
    while(tptr!=NULL){
        cout<<tptr->data<<" ";
        if((tptr->data) == n)cnt++;

        tptr = tptr->next;
    }
    cout<<endl;
}


int main(){
    cout<<"Enter an element :"<<endl;
    int n;cin>>n;
add(2);
add(3);
add(2);
add(5);
print(n);

cout<<cnt;
}


