#include<iostream>
#include<conio.h>
using namespace std;

struct node{
    char info;
    node* link;
};

node* start = NULL;

void insert_beg()
{
    node* NEW =new node;
    cout<<"\n Enter the data:\t";
    cin>>NEW->info;

    NEW->link = start;
    start=NEW;

}

void traverse()
{    
    cout<<"\n\n\n LINKED LIST \n\n";
    node* ptr = start;
    while(ptr!=NULL){
        cout<<ptr->info<<"\t";
        ptr=ptr->link;
    }
}

int main(){
     int n;
    cout<<"\n Enter the number nodes:\t";
    cin>>n;
    for(int i=0;i<n;i++){
        insert_beg();
    }
    traverse();
    getch();
    return 0;
}