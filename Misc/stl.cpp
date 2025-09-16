#include<bits/stdc++.h>
using namespace std;

void explainPair() {
    // pair<int,int> p = {1,2};
    // pair<int,pair<int,int>> p= { 1, {3,4}};
    pair<int,int> arr[] = {{1,2}, {3,4}, {5,6}}; 

    // cout << p.second.first << " " << p.first;

    cout << arr[1].first;
}

void explainVector(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(3);

    vector<int>:: iterator it = v.begin();
            // OR
    auto itr = v.end();
    itr--;
    //cout <<  (*itr) << " ";

    vector<pair<int,int>> v1;
    v1.push_back({1,2});
    v1.emplace_back(3,4);
    //cout << v1.back().first;

    vector<int> v2(5);
    // cout << v2.front();

    vector<int> v3(5,20);
    // cout << v3.front();

    vector<int> v4(v3);
    //cout << v4.back();

    //cout << v4[4] << v4[3];

    /*
    for(vector<int>:: iterator it = v3.begin(); it != v3.end(); it++)
        cout << *(it) << " " ;
    cout << endl;
    
    for(auto it = v2.begin(); it!= v2.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;
    */

    vector<int> v5;
    for(int i = 0; i < 5; i++){
        v5.push_back(i);
    }
    //cout << v5[3];
    //cout << v5[1] << endl;
    v5.erase(v5.begin() + 1);
    //cout << v5[1] << " " << v5[2] << endl;

    v5.erase( v5.begin() + 1 , v5.begin() + 2);
    //cout << v5[1] << " "  << v5[2];

    v5.insert(v5.begin() + 1, 10);

    v5.insert(v5.begin() + 2, 2, 15);

    vector<int> copy(2,20);
    v5.insert(v5.begin() + 2 , copy.begin(), copy.end());
    for(int i = 0; i < v5.size(); i++){
        cout << v5[i] << " ";
    }
    v5.pop_back();
    cout << endl;
    for(int i = 0; i < v5.size(); i++){
        cout << v5[i] << " ";
    }
    cout << endl;
    cout << v.empty() << endl;
    v.clear();
    cout << v.empty();
}

void explainList(){
    list<int> ls;

    ls.push_back(3);
    ls.push_front(1);
    ls.emplace_back(4);
    ls.emplace_front(6);
    //cout << ls.front();
    for(list<int>:: iterator it = ls.begin(); it != ls.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl << ls.empty();
}

void explainDeque(){
    deque<int> dq;
    for(int i = 0; i<5; i++){
        dq.push_back(i+1);
        dq.emplace_front(i);
    }

    for(auto it :dq){
        cout << it << " ";
    }
    cout << endl;
    dq.pop_front();
    dq.pop_back();

    for(auto it :dq){
        cout << it << " ";
    }
    
}

void explainStack(){
    stack<int> st;
    
    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.top();
    st.pop();
    cout << endl << st.top();
    cout << endl << st.size();
    //swap also

}

void explainQueue(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << q.front() << " " << q.back() << endl;

    q.back() += 5 ;
    cout << q.back() << endl;

    cout << q.front() << endl;
    q.pop();

    cout << q.front();
}

void explainPriorityQueue(){
    priority_queue<int> pq;  // ----> Max Heap

    pq.push(7); // {7}
    pq.push(5); // {7,5}
    pq.push(10);// {10,7,5}

    //cout << pq.top() << endl;
    pq.pop();
    //cout << pq.top();

 
    //priority queue  with minimum element at the top ----> Min Heap
    priority_queue<int, vector<int> , greater<int>> pq1; 

    pq1.push(2);    // {2}
    pq1.push(10);   // {2,10}

    cout << pq1.top () << endl;

    pq1.push(1);
    pq1.emplace(0);    // {1,2,10}
    cout << pq1.top();
}

void explainSet(){
    set<int> st;

    st.insert(2);
    st.insert(0);
    st.insert(2);
    st.insert(1);
    st.insert(1);
    st.insert(0);
    st.emplace(4);
    st.emplace(5);
    st.emplace(3);

    for(auto it : st){
        cout << it << " ";
    }
    cout << endl;
    set <int> :: iterator it = st.begin();

    auto it1 = st.find(6);
    // cout << *(it);

    int cnt = st.count(2);
    // cout << cnt;

    st.erase(3);    //takes logarithmic time

    for(auto it : st){
        cout << it << " ";
    }

    cout << endl;

    auto it2 = st.find(4);  
    st.erase(it2);  //takes constant time
    for(auto it : st){
        cout << it << " ";
    }

    // st.erase(start itr,end itr); --> removes start to end elements

}

void explainMultiset(){
    multiset<int> ms;

    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);

    cout << "Mul Set after insertions:";
    for(auto it : ms){
        cout << it << " "; 
    }

    cout << endl << ms.count(2) << endl;

    // ms.erase(2);
    // ms.erase(ms.find(2));
    cout << ms.count(2);
}

void explainUSet(){
    unordered_set<int> st;

    st.insert(6);
    st.insert(2);
    st.emplace(8);
    st.emplace(8);

    for(auto it : st){
        cout << it <<  " " ;
    }

    // lower_bound() and upper_bound() dont work with unordered set .

    // Rest all functions are same as of set.

    // has better complexity than set,mostly.
}

void explainMap(){

    map<int, int> mpp;
    map<int, pair<int, int>> mpp1;
    map< pair<int, int>, int> mpp2;

    mpp[1] = 3;
    mpp.insert({3,4});
    mpp.emplace(2,4);

    
    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

   
    mpp1[1] = {2,3};
    mpp1.insert({3, {4,5}});
    mpp1.insert({3, {6,5}});
    mpp1.emplace(2, pair<int, int>(6,7));

    /*
    for(auto it : mpp1){
        cout << it.first << " : " << "{" << it.second.first  << "," <<  it.second.second  << "}" << endl;
    }
    */

    //cout << mpp[2];
    auto it = mpp.find(2);
    //cout << (*it).second;

    auto it1 = mpp.lower_bound(1);
    cout << (*it1).second << endl;

    auto it2 = mpp.upper_bound(1);
    cout << (*it2).second;
}

void explainMultiMap(){
    // same as map but can store duplicate keys.
    // mpp[key] can not be used here    

    multimap<int, int> mpp;

    mpp.insert({2,5});
    mpp.insert({2,6});
    mpp.emplace(1,3);
    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }
}

void explainUnorderedMap(){
    unordered_map<int, int> mpp;

    mpp.insert({2,5});
    mpp.insert({2,6});
    mpp.insert({1,3});
    mpp.insert({5, 10});
    mpp.insert({7, 20});
    mpp.insert({42, 100});

    for(auto element : mpp){
        cout << element.first << " " << element.second << endl;
    }
}

void explainXtra(){

    
    int a[] = {1,5,4,6,7,3};
    int n = size(a);
    /*
    pair<int, int> a1[] = {{2,1}, {1,2}, {4,2}, {2,3}, {3,1}};
    int n = size(a1);
    cout << "Unsorted Array : "; 
    for(auto ele : a1){
        cout << "{" << ele.first << "," << ele.second << "}" << " ";
    }
    cout << endl;
    cout << n <<endl;
    
    sort(a1, a1+n);
    //sort(a+1, a+4);
    cout << "Sorted Array: ";
    for( auto ele : a1){
        cout << "{" << ele.first << "," << ele.second << "}" << " ";
    }
    */

    int num = 7;
    //int cnt = __builtin_popcount(num);
    //cout << cnt << endl;

    long long num1 = 1253762828;
    //int cnt1 = __builtin_popcount(num1);
    //cout << cnt1;

    string s = "123";
    string s1 = "231";
    sort(s1.begin(), s1.end());  // sort the string to print all permutations.

    // do{
    //     cout << s1 << endl;
    // }while(next_permutation(s1.begin(), s1.end()));


    int maxi = *(max_element(a, a+n));
    cout << maxi << endl;

    int mini = *min_element(a, a+n);
    cout << mini;
}

int main(){
    //explainPair();
    explainXtra();
}