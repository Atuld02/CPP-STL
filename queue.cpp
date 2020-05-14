#include<bits/stdc++.h>
using namespace std;
/* Demonstartion of Queue STL in CPP*/
/* Element is inserterted from rear*/
/* Elememts is deleted from front*/
int main ()
{ 
queue<long long int>q;
 queue<long long int>q1;
 long long int n,i,j;
 cin>>n;
 for(i=0;i<n;i++)
 { cout<<"Enter the item to be inserted in queue:";
 cin>>j;
 q.push(j);//pushes element in queue
}
cout<<"Size of queue is: "<<q.size();//displays the tptal no. of elements presentin a queue
cout<<endl;


cout<<q.back();//displays last elelemnt of queue
cout<<endl;
q1.swap(q);//swaps contenets of q1 to q nd vice versa

cout<<"Queue Elements Of queue Q are: ";
while(!q.empty())
{cout<<q.front()<<" ";//displays the 1st element of queue
 q.pop();//removes first element from queue
}
cout<<endl;

cout<<"Queue Elements Of queue Q1 are: ";
while(!q1.empty())
{cout<<q1.front()<<" ";//displays the 1st element of queue
 q1.pop();//removes first element from queue
}}
