#include<conio.h>
#include<iostream>

using namespace std;

struct node
{
int data;
node *left = NULL;
node *right = NULL;
};

node *root = NULL;
node *loc = NULL, *par = NULL;

void find(int item)
{
node *save = NULL, *ptr = root;
while(ptr != NULL)
{
if(item == ptr->data)
{
loc = ptr; par = save; break;
}
else if(item < ptr->data)
{
save = ptr; ptr = ptr->left;
}
else
{
save = ptr; ptr = ptr->right;
}
}
if(ptr == NULL)
{
loc = NULL;
par = save;
}
}

void insert(int item)
{
find(item); //find the loc and par

if(loc != NULL)
{
cout<<"\nItem "<<item << " is already PRESENT";
}
else
{
node *NEW = new node;
NEW->data = item;

if(par == NULL)
root = NEW;
else if(item < par->data)
par->left = NEW;
else
par->right = NEW;
}
}

void inorder(node *root)
{
if(root == NULL) return;


inorder(root->right);
if(root->left == NULL && root->right == NULL)
cout<<root->data<<"\t";

inorder(root->left);


}


int main()
{
int n, item;
cout<<"\nEnter the number of nodes:\t";
cin>>n;

for(int i=0; i<n; i++)
{
cout<<"\nEnter the Key:\t";
cin>>item;
insert(item);
}

inorder(root);

getch();
return 0;
}