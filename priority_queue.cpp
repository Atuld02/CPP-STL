#include<bits/stdc++.h>
using namespace std;
/* Demonstration Of Priority Queue STL in CPP*/
/*First element of the queue is the greatest of all elements in the queue and elements are in non increasing order*/
int main ()
{ priority_queue<long long int>pq,pq1;
 long long int i,n,j,k;
 cin>>n;
 for(i=0;i<n;i++)
 {cout<<"Enter element to be inserted in priority queue:";
  cin>>j;
  pq.push(j);
 }
 //displaying size of priority queue
cout<<"Size Of Priority Queue:"<<pq.size()<<endl;
//displaying top/first element of priority queue 
cout<<"Top/First ElementOf Priority Queue is:"<<pq.top()<<endl;
cout<<endl;


//Displaying elements of prioroty queue
cout<<"priority Queue elements Are:";
while(!pq.empty())
{ cout<<pq.top()<<" ";
 pq.pop();
}
cout<<endl;

swap(pq,pq1);//swap contents of priority queue pq with pq1 nd vice versa
cout<<"Prioriry Queue1 after swapping"<<endl;
while(!pq.empty())
{ cout<<pq.top()<<" ";
 pq.pop();
}
cout<<endl;

cout<<"Prioriry Queue2 after swapping"<<endl;
while(!pq1.empty())
{ cout<<pq1.top()<<" ";
 pq1.pop();
}
cout<<endl;

//Creating a priority queue of the form min heap
//min heap=numbers would be ascending order
cout<<"Creating Min Heap Priority Heap"<<endl; 
priority_queue <long long int, vector<long long int>, greater<long long int>> pq2;
cin>>n;
for(i=0;i<n;i++)
{ cout<<"Enter elements in min heap priority queue:";
 cin>>j;
 pq2.push(j);
 }
 
//Displaying elemnts of min heap Priority Queue
cout<<"Min Heap priority queue elements are:";
while(!pq2.empty())
{ cout<<pq2.top()<<" ";
pq2.pop();
  }
  cout<<endl;
  
  }


















