#include<bits/stdc++.h>
using namespace std;
/*Demonstration of DEQUE STL in CPP*/
/*Elements can be insterted from both ends*/
/*Elements can be deleted from both ends*/
int main ()
{ deque <long long int>dq1,dq2;
 long long int n,i,k,j;
 dq1.push_back(10);//elements gets inserted from rear end; 
 dq1.push_back(70);
 dq1.push_front(23);//elements gets inserted from front end; 
 dq1.push_back(44);
 // the latest element push_front in deque will be fisrt  element
 //the lastes element push_back in deque will be last element
 for(i=0;i<dq1.size();i++)
  cout<<dq1[i]<<" ";
dq1.clear();//removes all the elements from deque  
 cin>>n;
 for(i=0;i<n;i++)
 {cout<<"Enter elements to be inserted in deque:";
  cin>>k;
  dq1.push_front(k);//elements gets inserted from front end; 
 }
cout<<"Deque elements are:";
for(i=0;i<n;i++)
cout<<dq1[i]<<" ";//displaying deque elements
cout<<endl; 

cout<<"Front Elemnet:"<<dq1.front()<<"\n";//displays first element of deque
cout<<"Last elemnt:"<<dq1.back()<<"\n";//displays last elkent of deque

dq1.pop_front();//removes first element from deque

//Displaying Deque After removing first element
cout<<"After Remving Front Elemnt:"<<endl;
for(i=0;i<dq1.size();i++)
cout<<dq1[i]<<" ";//displaying deque elements
cout<<endl;

dq1.pop_back();//removes last element from deque

//Displaying deque after removing last element
cout<<"After Removing Last element"<<endl;
for(i=0;i<dq1.size();i++)
cout<<dq1[i]<<" ";//displaying deque elements
cout<<endl;

//For erasing nd inserting elements in deque we need iterators
deque<long long int>::iterator it;
it=dq1.begin();//assigning 1st element to the iterator
dq1.erase(it);//erasing 1st element form deque

//Displaying elements after erasing 1st element
cout<<"After erasing 1st elemnt:"<<endl;
for(i=0;i<dq1.size();i++)
cout<<dq1[i]<<" ";//displaying deque elements
cout<<endl;

dq1.insert(it,100);//insertes 0 at first position[0] in deque
//Displaying elements after inserting 1st element
cout<<"After inserting at first[0] position"<<endl;
for(i=0;i<dq1.size();i++)
cout<<dq1[i]<<" ";//displaying deque elements
cout<<endl;

swap(dq1,dq2);//swaps contenets of dq1 to dq2 nd vice versa
cout<<"Deque1 after swapping"<<endl;
for(i=0;i<dq1.size();i++)
cout<<dq1[i]<<" ";//displaying deque elements
cout<<endl;

cout<<"Deque2 after swapping"<<endl;
for(i=0;i<dq2.size();i++)
cout<<dq2[i]<<" ";//displaying deque elements
cout<<endl;
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 
