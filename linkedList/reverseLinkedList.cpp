# include <bits/stdc++.h>
using namespace std;

struct node{

int value;
struct node* link;

};

struct node* head;

int main(){

int x,n;
cin>>n;

head = new struct node;
head->link = NULL;

struct node* temp;
struct node* tmp;

tmp = head;

while(n>0){

cin>>x;
temp = new struct node;
temp->link = NULL;
temp->value = x;

tmp->link = temp;
tmp = temp;

n--;

}

struct node* current = head->link;
struct node* next;
struct node* prev=NULL;


while(current!=NULL){

 next = current->link;
 current->link = prev;
 prev = current;
 current = next;

}

head->link = prev;
tmp = head;


while(tmp->link!=NULL){
 
 tmp = tmp->link;
 cout<<tmp->value<<" ";

}

cout<<"\n\n";

}
