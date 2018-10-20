# include <bits/stdc++.h>
using namespace std;

vector <int> vec;

int binSearch(int val, int begin, int end){

if(begin<=end){

 int mid = (begin+end)/2;

 if(vec[mid]==val)
 	return mid;
 else if(val > vec[mid])
	return binSearch(val,mid+1,end);
 else
	return binSearch(val,begin,mid);

}

return -1;

}

int main(){

int n,x;
cin>>n;

for(int i=0;i<n;i++){

cin>>x;
vec.push_back(x);

}

cin>>x;

cout<<"It is at position - "<<binSearch(x,0,n-1)<<endl;

}
