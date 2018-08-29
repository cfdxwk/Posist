#include<bits/stdc++.h>
using namespace std;

// if parent[node]==0,it means the node don't have any parent

vector<int>parent(100005,0);

// child is a vector that contains the children for any node

vector< vector<int> >child(100005);

int Node_no=1;



// structure for any kind of date
struct date{
int date;
int month;
int year;
};


struct data{
string owner_id;
float value;
string owner_name;


// this will convert data type of value from float to string
stringstream stream;
stream << fixed << setprecision(2) <<value;
string s = stream.str();

// generating hash by concatenating these three strings;

string need_to_hash="";
need_to_hash+=owner_id,need_to_hash+=s,need_to_hash+=owner_name;


};

// structure of a particular node
struct record{

struct date Date;

struct data Data; 


// this will assign a new node number to the new node and increament the global variable Node_no
int node_no= Node_no++;

//the string that can uniquely identify a can be the the string need_to_hash that we made in structure data
string uniquely_identify;
uniquely_identify=Data.need_to_hash;

// for parent address we already have an vector name parent declared globally where we are storing parent,we will find the name of the parent from there and then can access its address through child vector
int *pointer_to_parent;
int parent_name= parent[node_no];
int cnt=0;
pointer_to_parent=child + parent_name

//for pointers to children first we must know how many children it have, so that we can make use of memeory efficiently for that purpose we have a child vector declared globally
int size=(int) child[node_no].size();
int *pointers_to_childrens[],ind=0;

for(int i=0;i<(int)child[node_no].size();i++){
	pointers_to_childrens= child +
}



};






int main(){








return 0;
}


