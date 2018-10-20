# include <bits/stdc++.h>
using namespace std;

struct node{
int value;
struct node* link;
};

struct node *head1, *head2;

int main(){

int n,x;

head1 = new struct node;
head2 = new struct node;

cin>>n;

struct node* tmp;
struct node* temp;

tmp = head1;

while(n>0){

cin>>x;
temp = new struct node;
temp->link = NULL;
temp->value=x;

tmp ->link = temp;
tmp = temp;

n--;

}

cin>>n;

tmp = head2;

while(n>0){

cin>>x;
temp = new struct node;
temp->link = NULL;
temp->value = x;

tmp->link = temp;
tmp =temp;

n--;

}


struct node* prevTwo = head2;
struct node* currOne = head1->link;
struct node* currTwo = head2->link;

while((head1->link)!=NULL && currTwo!=NULL){

 if((head1->link)->value < currTwo->value){
	
  
  prevTwo->link = head1->link;
  head1->link = (head1->link)->link;
  (prevTwo->link)->link = currTwo;
  prevTwo = prevTwo->link;
  
	
}

else{

  prevTwo = currTwo;
  currTwo = currTwo->link;

}

}

if(head1->link !=NULL && currTwo == NULL){

 prevTwo->link = head1->link;

}

tmp = head2;

while(tmp->link!=NULL){

tmp = tmp->link;
cout<<tmp->value<<" ";

}

cout<<"\n\n";

}
