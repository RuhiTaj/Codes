# include <bits/stdc++.h>
using namespace std;

vector <int> vec;

void merge( int start, int end){
 
 int mid = (start+end)/2;
 vector <int> vec1,vec2,Fin;

 for(int i=start;i<=mid;i++){
 vec1.push_back(vec[i]);
}

for(int i=mid+1;i<=end;i++){
 vec2.push_back(vec[i]);
}

int one=0, two=0;

while(one < vec1.size() && two<vec2.size()){
 
  if(vec1[one]<=vec2[two]){
     Fin.push_back(vec1[one]);
	one++;
}
 else{
    Fin.push_back(vec2[two]);
    two++;
}

}

while(one != vec1.size()){
 Fin.push_back(vec1[one]);
 one++;
}

while(two!=vec2.size()){
 Fin.push_back(vec2[two]);
 two++;
}

int i =0 ;

while(i<Fin.size()){

vec[i+start] = Fin[i];
i++;

}

}

void split( int start, int end){

if(start < end){
 
 int mid = (start+end)/2;

split( start, mid);
split(mid+1,end);
merge(start, end);

}

return ;

}

int main(){

int n,x;
cin>>n;

for(int i=0;i<n;i++){
  cin>>x;
  vec.push_back(x);
}

split(0,n-1);

for(int i=0;i<n;i++){
cout<<vec[i]<<" ";
}

cout<<endl;

}

