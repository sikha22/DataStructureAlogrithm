#include<iostream>
using namespace std;
class person
{
private:
                int age;
                char *name;
public:
                
                void show()
                {
                                cout<<"\nName:- "<<name;
                                cout<<"\nAge:- "<<age;
                                cout<<endl;
                }
                person(){
                
                	age=18;
                	name="sikha";
				}
				person(char*p){
					age=18;
					name=p;
				}
				person(int q,char*p){
					age=q;
					name=p;
				}
};

int main()
{
            
                person p1;
                person p2("Shrestha");
                person p3(14, "Ragini");
                
                p1.show();
                p2.show();
                p3.show();
                return 0;
}