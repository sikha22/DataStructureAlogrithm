#include<conio.h>
#include<iostream>
#include<string.h>

using namespace std;

struct tree_node
{
string name;
tree_node *left = NULL;
tree_node *right = NULL;
};

tree_node *root = NULL;

void preorder(tree_node *root)
{
if(root == NULL) return;

cout<<"\t"<<root->name;
preorder(root->left);
preorder(root->right);
}

int main()
{
tree_node *new1 = new tree_node;
new1 -> name = "D";
root = new1;

tree_node *new2 = new tree_node;
new2 -> name = "A";
new1->left = new2;

tree_node *new3 = new tree_node;
new3 -> name = "F";
new2->left = new3;

tree_node *new4 = new tree_node;
new4 -> name = "P";
new1->right = new4;

tree_node *new5 = new tree_node;
new5 -> name = "G";
new4->left = new5;

tree_node *new6 = new tree_node;
new6 -> name = "K";
new5->right = new6;


preorder(root);

getch();
return 0;
}