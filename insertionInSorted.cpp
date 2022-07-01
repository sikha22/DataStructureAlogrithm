#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
int info;
node *link;
};

node *start = NULL;
node *larg = NULL;

void print()
{
cout<<"\n\n\t Linked List";
node *ptr = start;
while(ptr != NULL)
{
cout<<ptr->info <<"\t";
ptr = ptr->link;
}
}

void insert_after_LOC(node *loc)
{
node *NEW = new node;
cout<<"\nEnter the ITEM:\t";
cin>> NEW->info;


if(loc == NULL)
{
NEW->link = start;
start = NEW;
}
else
{

NEW->link = loc->link;

loc->link = NEW;

}
cout<<"\nInserted";
}

void insert_after_largest()
{
//Find the address of node containing the
//Largest element LOC

if(start == NULL)
{
larg = NULL;
}
else
{
larg = start;
node *ptr = start->link;
while(ptr != NULL)
{
if(ptr->info > larg->info)
larg = ptr;

ptr=ptr->link;
}
}

insert_after_LOC(larg);
}

int main()
{
int n;
cout<<"\nHow many nodes you want to create?:\t";
cin>>n;
for(int i=0; i<n; i++)
insert_after_largest();

print();
getch();
return 0;
}