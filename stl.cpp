#include<bits/stdc++.h>
using namespace std;

void explainPair(){

      pair<int, int> p = {1,3};
      cout<<p.first<<" "<<p.second;
        cout<<endl;

      cout<<"Print nested pairs ";
      //nexted pair
      pair<int, pair<int, int>> q = {1, {2,3}};
      cout<<p.first<<" "<<q.second.first<<" "<<q.second.second;
        cout<<endl;

     //pair array
     cout<<"Print array pair ";
     pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
     cout<<arr[1].first;
    }

void explainVectors(){
    vector<int> v; //creates an empty container

    v.push_back(1);
    v.emplace_back(2); //similar to push_back
    v.push_back(3);
    v.emplace_back(4);


    //vector as pair
    vector<pair<int, int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    //vector with already filled values
    vector<int> v4(5, 100); //{100, 100, 100, 100, 100}

    //container with inital defined size
    vector<int> ve(5);

    vector<int> v1(5, 20); //{20,20,20,20,20}
    vector<int> v2(v1);    //v2 will have exact duplicate of v1

    //access into the vectos
    //m1- as arrays
    //m2- iterators
    vector<int>::iterator it = v.begin();    //it directly dircts to the memory of v={1,2,3,4}
    it++;
    // cout<<*(it)<<" ";

    it=it+2;
    // cout<<*(it)<<" ";

    // vector<int>::iterator itt = v1.end();    //it does not point to the end of the vector address but it points next to the address of the last element then do it-- then it will be on the last element

    //never used
    // vector<int>::iterator it= v1.rend();
    // vector<int>::iterator it= v1.rbegin();

    // cout<<v[0]<<" "<<v.at(0)<<" ";
    // cout<<v.back()<<" ";
    // cout<<endl;

    //print the vectors
    // cout<<"print the vector";
    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    //     cout<<*(it)<<" ";
    // }

    //more simplified way
    // cout<<endl<<"By auto";
    // for(auto it= v.begin(); it!= v.end(); it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;

    // cout<<"By for each loop";
    // for(auto it: v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;


    //delete
    v.erase(v.begin()+1);    // from {1,2,3,4} now 2 will be deleted and it will form {1,3,4}
    cout<<v.at(1);           // its 3

    //-insert function
    vector<int> vo{2,100};    //{100, 100}
    vo.insert(vo.begin(), 300);    //{300, 100, 100}
    vo.insert(vo.begin()+1, 2, 10); //{300, 10, 10, 100, 100}

    //{10, 20}
    cout<<v.size(); //2

    //{10, 20}
    v.pop_back(); //{10}

    //v1->{10, 20}
    //v2->{30,40}
    v1.swap(v2); //v1->{30, 40} v2->{10, 20}

    v.clear(); //erases the entire vector

    cout<< v.empty(); // it makes the vector {}, and also it returns True if the vector is empty pahale se hi else it return False if pahale se kuch h in the vector


}
void explainlist(){
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(5);
    ls.emplace_front(6);

    for(auto it: ls)    cout<<it<<" ";
}
void explaindeque(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);
    dq.pop_front(); //{3 1 2}
    for(auto it: dq)    cout<<it<<" ";
    cout<<endl;
    cout<<dq.back()<<" "<<dq.front();
}  
void explainstack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.emplace(3);
    // cout<<st.top();
    cout<<st.size();
    cout<<st.empty();
}
void explainqueue(){
    queue <int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.back()+=5;
    cout<<q.back();
    cout<<q.front();
    cout<<q.size();
}
void explain_priority_queue(){
    priority_queue<int> pq;
    pq.push(5);    //{5}
    pq.push(2);    //{5,2}
    pq.push(8);    //{8,5,2}
    pq.emplace(10);    //{10,8,5,2}

    cout<<pq.top()<<" ";    //10
    pq.pop();
    cout<<pq.top();    //8
}
void explain_min_heap(){
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // 5
    pq.push(2); //2,5
    pq.push(8); //2,5,8
    pq.emplace(10); //2,5,8,10

    cout<<pq.top(); //2
}
void explain_set(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);
    auto it = st.find(9);
    cout<<*it<<" ";
    int cnt = st.count(9);
    cout<<cnt<<" ";
    st.erase(3);
     for(const auto &it: st)    cout<<it<<" ";

}
void explain_multiset(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);

    for(auto it: ms)    cout<<it<<" ";
    cout<<endl;

    // ms.erase(1); //erase all 1
    // for(auto it: ms)    cout<<it<<" ";

    int cnt = ms.count(1); //frist 1 ko point krta hua iterator will be returned
    ms.erase(ms.find(1));
    for(auto it: ms)    cout<<it<<" ";



}
void explain_map(){
    map<int, int> mpp;
    mpp[1]=10;
    mpp.emplace(3,13);
    mpp.insert({2,12});
    
    for(auto it: mpp){
        cout<<it.first<<" , "<<it.second<<endl;
    }
    cout<<endl;
    mpp[2]; //give me value corresponding to this key

    auto it = mpp.find(3);
    cout<< (*it).second;


}

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second)   return true; //assuming p1 is ahead of p2
    if(p1.second > p2.second)   return false; //now swap them

    //if they are same, dec as per the first element
    if(p1.first > p2.first)    return true;
    else return false;

}

void explainExtra(){
    // sort(a, a+n);
    // sort(v.begin(), v.end());

    // sort(a, a+n, greater<int>);

    pair<int, int> a[] ={{1,2}, {2,1}, {4,1}};
    //my sorting
    sort(a,a+3, comp);
    for(auto it: a)    cout<<it.first<<","<<it.second<<" ";
}

int main(){
    // explainPair();
    // explainVectors();
    // explainlist();
    // explaindeque();
    // explainstack();
    // explainqueue();
    // explain_priority_queue();
    // explain_min_heap();
    // explain_set();
    // explain_multiset();
    // explain_map();
    explainExtra();
    return 0;
}