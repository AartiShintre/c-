#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    //map<key_data_type,value_data-type>var_name;
    //var_name[key1]=value1;
//var_name[key2]=value2;
map<string,string>phonebook;
phonebook["arti"]="8483843618";
phonebook["pooja"]="8483845767";
string name;
cout<<"enter name";
cin>>name;
if(phonebook.find(name)!=phonebook.end())
cout<<name<<":"<<phonebook[name];
else
cout<<name<<"not found";
    return 0;
}
