#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include <bits/stdc++.h>
#include<stack>
#include<queue>
#include<maps>


using namespace std;

int main(int argc, char* argv[]){
    //vectors 
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;


    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
    v.pop_back();
    v.emplace_back(50);
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.at(2)<<endl;
    
    vector<float> v1={1.0,2.9,3.5};
    vector<double> v3(3,10);    //vector of size 3 and all elements with the value 10
    for(int i:v3){
        cout<<i<<" ";

    }
    vector<int>v2(10,-1); //vector of size 10 and all elements with the value -1
    for(int i:v2){
        cout<<i<<" ";

    }
    vector<int> v4(v); //copying vector v to v4
     for(int i:v4){
        cout<<i<<" ";

    }
    cout<<endl;
    //erase function 
    v.erase(v.begin());
    v.erase(v.begin()+1,v.begin()+2); //erases elements from index 1 to 2
    v.erase(v.begin()+2);
    //here size of the elements  will be changes but the capacity will remain same

    //insert function
    v.insert(v.begin(),100); //inserts 100 at the beginning
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        
    }
    //clear function 
    v.clear(); //clears the vector
    //isempty function
    cout<<v.empty()<<endl; //returns 1 if empty else 0

    //iterators
    vector<int>::iterator it;
    for(it=v1.begin();it!=v1.end();it++){
        cout<<*(it)<<" ";
    }
    //reverse iterators
    vector<int>::reverse_iterator it;
    for(it=v1.rbegin();it!=v1.rend();it++){
        cout<<*(it)<<" ";
    }

    //list
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(0);
    for(int i:l){
        cout<<i<<" ";
    }
    l.pop_back();
    l.pop_front();
    //emplace_front and emplace_back
    l.emplace_front(10);
    l.emplace_back(20);

    //deque(Container with dynamic size that can be expanded or contracted from both ends)
    deque<char>d={'a','b','c'};
    d.push_back('d');
    d.push_front('z');

    //pair
    pair<int,string>p={1,"hello"};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,int>p1={2,3};
    cout<<p1.first<<" "<<p1.second<<endl;
    //pair of pair
    pair<pair<int,int>,string>p2={{1,2},"hello"};
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second<<endl;
    //vector of pairs
    vector<pair<int,string>>v5;
    v5.push_back({1,"hello"});
    v5.push_back({2,"world"});//insert at the end
    for(auto i:v5){
        cout<<i.first<<" "<<i.second<<endl;
    }
    vector<pair<int,int>>v6=({{1,2},{3,4},{5,6}});
    v6.emplace_back(7,8);//in-place creation of the pair


    //stack 
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl; //returns the top element
    s.pop(); //removes the top element
    cout<<s.size()<<endl; //returns the size of the stack
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    stack<int>s1;
    s1.swap(s);

    //queue
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.front()<<endl; //returns the front element
    cout<<q.back()<<endl; //returns the back element
    q.pop(); //removes the front element
    cout<<q.size()<<endl; //returns the size of the queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    queue<int>q1;
    q1.swap(q);

    //priority queue
    priority_queue<int>pq; //max heap
    pq.push(1);
    pq.push(3);
    pq.push(2);
    pq.push(5);
    cout<<pq.top()<<endl; //returns the top element
        while(!pq.empty()){//by default max heap
        cout<<pq.top()<<" ";
        pq.pop();
    }
    priority_queue<int,vector<int>,greater<int>>pq1; //min heap
    pq1.push(1);
    pq1.push(3);
    pq1.push(2);
    pq1.push(5);
    cout<<pq1.top()<<endl; //returns the top element
        while(!pq1.empty()){//by default max heap
        cout<<pq1.top()<<" ";
        pq1.pop();
        }
    
    //maps
    maps<string,int>m;
    m["tv"]=10;
    m["laptop"]=10;
    m["phone"]=20;
    m["earpots"]=5;
    m["fridge"]=15;
    m["mouse"]=20;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;//print keys in the sorted order inn the lexicographical order
    }

    //sets 
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2); //duplicate elements are not allowed
    cout<<*s.lower_bound(2)<<endl; //returns the first element greater than or equal to 2
    cout<<*s.upper_bound(2)<<endl; //returns the first element greater than 2

    //algorithms 
    vector<int>v={1,2,3,4,5};
    reverse(v.begin(),v.end()); //reverses the vector

    //sorting 
    sort(v.begin(),v.end()); //sorts the vector in ascending order
    sort(v.begin(),v.end(),greater<int>()); //sorts the vector in descending order

    int a[5]={1,2,3,4,5};
    sort(a,a+5); //sorts the array in ascending order

    vector<pair<int,int>>v={{3,1},{2,1},{7,3},{5,2}};
    sort(v.begin(),v.end()); //sorts the vector of pairs based on the first element
    for(auto i:v){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //custom sorting of pairs based on the second element
    sort(v.begin(),v.end(),[](pair<int,int>a,pair<int,int>b)){
        if(p1.second<p2,second){
            return true;
        }
        else 
        return false;

    }

    //reverse 
    reverse(v.begin(),v.end());
    reverse(v,begin()+2,v.end()); //reverses the vector from index 2 to end

    //next permutation
    next_permutation(v.begin(),v.end()); //returns the next lexicographical permutation
    prev_permutation(v.begin(),v.end()); //returns the previous lexicographical permutation

    swap(v[0],v[1]); //swaps the elements at index 0 and 1
    min(10,20); //returns the minimum of the two
    max(10,20); //returns the maximum of the two
    max_elemnent= *max_element(v.begin(),v.end()); //returns the maximum element in the vector
    min_element= *min_element(v.begin(),v.end()); //returns the minimum element in
    binqary_search(v.begin(),v.end(),3); //returns true if 3 is present in the vector else false
        
    return 0;

}
