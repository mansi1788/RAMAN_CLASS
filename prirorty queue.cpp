prirorty queue


#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int main()
{
    cin>>n;
    priority_queue<int>pq;
    for(int i=0;i<n;i++)
{
    int element;
    cin>>element;
    pq.push(element);
} 

while(!pq.empty())
{
    cout<<pq.top()<<" ";
    pq.pop();
}
    
   return 0;
   
}



ques

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
void printPriorityQueue(priority_queue<int>pq)
{
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    priority_queue<int>pq;
    for(int i=0;i<n;i++)
{
    int element;
    cin>>element;
    pq.push(element);
} 

while(!pq.empty())
{
    cout<<pq.top()<<" ";
    pq.pop();
}
    
   return 0;
   
}



ques



#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
void printPriorityQueue(priority_queue<int,vector<int>,greater<int>>pq)
{
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)
{
    int element;
    cin>>element;
    pq.push(element);
    printPriorityQueue(pq);
} 

while(!pq.empty())
{
    cout<<pq.top()<<" ";
    pq.pop();
}
    
   return 0;
   
}

//////max heap from vector

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

//max heap from vector
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
{
    int element;
    cin>>element;
    v.push_back(element);
} 
    priority_queue<int>pq(v.begin(),v.end());
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
   return 0;
   
}

'''5
2 4 6 5 1
6 5 4 2 1 '''



#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

//max heap from vector
int main()
{
    int n;
    cin>>n;
   int array[n];
    for(int i=0;i<n;i++)
    cin>>array[i];
    
    
    priority_queue<int> pq(array,array+n);
    
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
   return 0;
   
}

'''5
2 3 67 3 1
5

2 3 67 3 1
67 5 3 3 2 '''




#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

//min  heap for array
int main()
{
    int n;
    cin>>n;
   int array[n];
    for(int i=0;i<n;i++)
    cin>>array[i];
    
    
    priority_queue<int,vector<int>,greater<int>> pq(array,array+n);
    
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
   return 0;
   
}


'''5
4 2 7 45 1
1 2 4 7 45 '''

//min max element
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

//min  heap for array
int main()
{
   int n;
   cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
       int element;
       cin>>element;
       v.push_back(element);
   }
   int max=*max_element(v.begin(),v.end());
   cout<<max;
   
   int min=*min_element(v.begin(),v.end());
   cout<<"minimum="<<min;
   return 0;
    
}
5 
5 12 3 7 4
max = 12
minimum = 3



#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int main()
{
   string s;
   cin>>s;
   next_permutation(s.begin(),s.end());
   cout<<s<<endl;
   next_permutation(s.begin(),s.end());
   cout<<s<<endl;
   return 0;
    
}


'''ABC
ACB
BAC'''



#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int main()
{
   string s;
   cin>>s;
   next_permutation(s.begin(),s.end());
   cout<<s<<endl;
   next_permutation(s.begin(),s.end());
   cout<<s<<endl;
    next_permutation(s.begin(),s.end());
   cout<<s<<endl;
    next_permutation(s.begin(),s.end());
   cout<<s<<endl;
    next_permutation(s.begin(),s.end());
   cout<<s<<endl;
   
   return 0;
    
}
'''abc
acb
bac
bca
cab
cba'''

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int main()
{
   string s;
   cin>>s;
   cout<<s<<endl;
   for(int i=0;i<15;i++)
   {
    next_permutation(s.begin(),s.end());
   cout<<s<<endl;
   }
   return 0;
    
}

'''abc
abc
acb
bac
bca
cab
cba
abc
acb
bac
bca
cab
cba
abc
acb
bac
bca

'''



#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;


int main()
{
   string s;
   cin>>s;
   cout<<s<<endl;
  while(next_permutation(s.begin(),s.end()))
 
   cout<<s<<endl;
   
   return 0;
    
}
'''abc
abc
acb
bac
bca
cab
cba

'''


#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;


int main()
{
   string s;
   cin>>s;
   cout<<s<<endl;
   
   int count=1;
   cout<<s<<endl;
  while(next_permutation(s.begin(),s.end()))
 {
     
 
   cout<<s<<endl;
   count++;
 }
 cout<<"Number of Permutations ="<<count<<endl<<endl;
   return 0;
   }
  
'''abc
acb
bac
bca
cab
cba
Number of Permutations =6
'''







#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;


int main()
{
   string s;
   cin>>s;
   
   string temp=s;
   while(true)
   {
       cout<<s<<endl;
       next_permutation(s.begin(),s.end());
       if(temp==s)
       break;
   }
 
   return 0;
   }
  


  #include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
//decimal to binary

int main()
{
  int num;
  cin>>num;
  int setBits=__builtin_popcount(num); // return the number of set bits in the binary representation of the number
  cout<<"Number of set bits"<<setBits;
   return 0;
   }
  

  '''8
  Number of set bits=

  1'''

  #include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
//binary search

int main()
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      int element;
      cin>>element;
      v.push_back(element);
      
  }
  cout<<binary_search(v.begin(),v.end(),9);
  return 0;
   }
  '''5
1 2 3 4 5
0'''


#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;


int main()
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      int element;
      cin>>element;
      v.push_back(element);
      
  }
  int target;
  cin>>target;
  if(binary_search(v.begin(),v.end(),target))
  cout<<"Element is present";
  else
  cout<<"Element is not present";
  return 0;
  }
  '''5
1 2 3 4 5
3
Element is present'''


#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;


//lower_bound()


//if the elemnt is present then lower bound returns the iterator or location of that element

//if the element is not present the the lower bound returns the iterartor or location of the next element
//upper bound returns the itraeryor or location of the next element irrespective of wheather the target element is present or not present
int main()
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      int element;
      cin>>element;
      v.push_back(element);
      
  }
  
  int target;
  cin>>target;
 auto it=lower_bound(v.begin(),v.end(),target);
 if(it==v.end())
 cout<<"Not present";
 else
 cout<<*it;
 return 0;
  }
  

  '''5
1 3 5 7 9
4
5'''












#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;


//lower_bound()


//if the elemnt is present then lower bound returns the iterator or location of that element

//if the element is not present the the lower bound returns the iterartor or location of the next element
//upper bound returns the itraeryor or location of the next element irrespective of wheather the target element is present or not present
int main()
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      int element;
      cin>>element;
      v.push_back(element);
      
  }
  
  int target;
  cin>>target;
 auto it=lower_bound(v.begin(),v.end(),target);
 
 cout<<" Element to which the itrartor is pointing="<<*it<<endl;
 
 cout<<endl;
 
 int idx=lower_bound(v.begin(),v.end(),target)-v.begin();
 cout<<"Index of the element to which the itrator is pointing ="<<idx;
  //in case of duplicate we will get the  occurance of the iterartor of first element
 return 0;
  }
 ''' 8
1 2 3 4 5 6 7 8
5
 Element to which the itrartor is pointing=5

Index of the element to which the itrator is pointing =4'''


'''8
-100 -50 -5 05 10 15 
20 25 
8
] Element to which the itrartor is pointing=10

Index of the element to which the itrator is pointing =4'''




#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;


//upper_bound()


//if the elemnt is present then lower bound returns the iterator or location of that element

//if the element is not present the the lower bound returns the iterartor or location of the next element
//upper bound returns the itraeryor or location of the next element irrespective of wheather the target element is present or not present
int main()
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      int element;
      cin>>element;
      v.push_back(element);
      
  }
  
  int target;
  cin>>target;
 auto it=upper_bound(v.begin(),v.end(),target);
 
 cout<<" Element to which the itrartor is pointing="<<*it<<endl;
 
 cout<<endl;
 
 int idx=upper_bound(v.begin(),v.end(),target)-v.begin();
 cout<<"Index of the element to which the iterator is pointing ="<<idx;
 return 0;
  }
  
  
  //in case of duplicate we will gwt the iterartor of first element








  #include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<numeric>

using namespace std;


int main()
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      int element;
      cin>>element;
      v.push_back(element);
      
  }
cout<<"Sum ="<<accumulate(v.begin(),v.end(),0);
  return 0;
}
  
  '''5
1 2 3 4 5
Sum =15'''





#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<numeric>

using namespace std;


int main()
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      int element;
      cin>>element;
      v.push_back(element);
      
  }
cout<<"Sum ="<<accumulate(v.begin(),v.end(),100);
  return 0;
}
  
  '''5
1 2 3 4 5
Sum =115'''






#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<numeric>

using namespace std;


int main()
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      int element;
      cin>>element;
      v.push_back(element);
      
  }
  int target;
  cin>>target;
  cout<<"Number of occurance of"<<target<<"="<<count(v.begin(),v.end(),target);
  return 0;
}
  
  


  #include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<numeric>

using namespace std;


int main()
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      int element;
      cin>>element;
      v.push_back(element);
      
  }
  reverse(v.begin(),v.end());
  
  for(int element :v)
  cout<<element<<" ";
  cout<<endl;
  
  
  int target;
  cin>>target;
  cout<<"Number of occurance of"<<target<<"="<<count(v.begin(),v.end(),target);
  return 0;
}
  
  5
1 1 2 5 3
3 5 2 1 1 
5
Number of occurance of 5=1
