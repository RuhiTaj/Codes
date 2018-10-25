# include <bits/stdc++.h>
using namespace std;

vector <int> vec;


bool check( int start, int end, int sum){

 if(sum==0)
 	return true;

 for(int i=start;i<=end;i++){

  if(vec[i]<=sum){

   if(check(i+1,end,sum-vec[i]))
   	 return true;  

  }


 }

 return false;

}


int main()
{

 int n;
 cin>>n;

 int x;

 for(int i=0;i<n;i++)
 {
 	cin>>x;
 	vec.push_back(x);
 }

 int sum;
 cin>>sum;

 if(check(0,n-1,sum))
 	cout<<"Subset Sum exists"<<endl;
 else
 	cout<<"Subset sum does not exits"<<endl;

}