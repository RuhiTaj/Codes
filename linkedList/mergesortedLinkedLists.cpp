# include <bits/stdc++.h>
using namespace std;

struct node{

int data;
struct node* link;

};

struct node* a;
struct node* b;

struct node* createLinkedList(int n){

int x;
struct node* res, *temp, *endr;
res = new struct node;
res->link = NULL;
endr = res;

while(n>0){
cin>>x;
temp = new struct node;
temp->link = NULL;
temp->data = x;

res->link = temp;
res = temp;

n--;

}

return endr->link;

}

struct node* merge(struct node* a, struct node* b){

struct node* result=NULL;

if(a==NULL)
 return b;
else if(b==NULL)
 return a;

if((a->data)<(b->data)){
 
 result = a;
 result->link =merge(a->link, b);

}

else{

 result = b;
 b->link =merge(a, b->link);

}

return result;

}

int main(){

int n;
cin>>n;

struct node *p, *q;
p = createLinkedList(n);
cin>>n;
q = createLinkedList(n);

cout<<"\n\n";

struct node *r = merge(p,q);


while(r!=NULL){

 cout<<r->data<<" ";
 r = r->link;

}

cout<<"\n\n";

}
