# include <bits/stdc++.h>
using namespace std;

struct node{

int value;
struct node* link;

};

struct node* head;

int main(){

head = new struct node;
head->link = NULL;

int n,x;
cin>>n;

struct node* temp;
struct node* tmp;
tmp = head;

while(n>0){

temp = new struct node;
cin>>x;
temp->value=x;
temp->link=NULL;
tmp ->link =temp;
tmp = temp;
n--;

}

tmp = head;

while(tmp->link!= NULL){

 tmp = tmp->link;
 cout<<tmp->value<<" ";

}

cout<<"\n";

}
