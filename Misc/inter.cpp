#include<bits/stdc++.h>
#include<string>
using namespace std;

string fName = "Tarun ";

string lName = "Gill";

int main(){
    /*string fullName = fName.append(lName);
    cout << fullName << endl;

    cout << fullName.length() << endl;
    fullName[5] = 'a';
    cout << fullName; */

    string myName;
    //cout << "Enter your name:";
    //cin >> myName;
    getline(cin,myName);
    cout << "Your name is " << myName;
    return 0;

}
