#include<iostream>
#include<conio.h>
using namespace std;
   struct node {
        char info; 
        node* link;
         };
          node* start = NULL;
           void insert_beg() { 
               node* NEW = new node;
                cout<<"\nEnter the data:\t";
                 cin>>NEW->info; 
                 NEW->link = start;
                  start = NEW;
                  } 
                  void insert_end() {
                       node* NEW = new node; 
                       cout<<"\nEnter the data:\t"; 
                       cin>>NEW->info; 
                       if(start == NULL)
                        {
                            NEW->link = start;
                             start = NEW; 
                             }
                              else {
                                   //find the address of last node
                                    node* ptr = start;
                                     while(ptr->link != NULL)
                                      {
                                           ptr = ptr->link; 
                                           }
                                            NEW->link = NULL;
                                             ptr->link = NEW; 
                                             } }
                                              void traverse() {
                                                   cout<<"\n\n\tLINKED LIST\n\n";
                                                    node* ptr = start;
                                                     while(ptr != NULL) {
                                                          cout<<ptr->info <<"\t"; 
                                                          ptr = ptr->link; 
                                                          } }
                                                           int main() { 
                                                               cout<<"\nEnter the number nodes:\t"; 
                                                               int n;
                                                                cin>>n; 
                                                                for(int i=0; i<n; i++) 
                                                                { 
                                                                    insert_end(); 
                                                                    } 
                                                                    traverse();
                                                                     getch();
                                                                      return 0; 
                                                                      }