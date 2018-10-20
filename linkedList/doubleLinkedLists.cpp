# include <bits/stdc++.h>
using namespace std;

struct node{

int value;
struct node* link;
struct node* revl;

};

struct node* head;

int main(){

head = new struct node;
head->link = NULL;
head->revl = NULL;

struct node* temp;
struct node* tmp;

tmp = head;

int n,x;
cin>>n;

while(n>0){

cin>>x;
temp = new struct node;
temp->value = x;
temp->link = NULL;
temp->revl = tmp;

if(tmp==head)
	temp->revl=NULL;

tmp->link = temp;
tmp = temp;

n--;
}

tmp=head;

while(tmp->link != NULL){

tmp = tmp->link;
cout<<tmp->value<<" ";

}

cout<<"\n\n";


while(tmp!=NULL){

cout<<tmp->value<<" ";
tmp = tmp->revl;

}

cout<<"\n\n";

}

