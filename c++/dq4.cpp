#include <iostream>

using namespace std;
class number{
	int num1;
	int num2;
	public:
		number(){ }
		number(int p,int q){
			num1=p;
			num2=q;
		}
		friend number operator-(number &a,int b){
			number temp;
			int x=a.num1;
			int y=a.num2;
			temp.num1=x-b;
			temp.num2=y-b;
			return(temp);
		}
		void show(){
			cout<<"\n"<<num1<<","<<num2<<endl;
		}
};
int main(){
	
	cout<<"ENTER TWO NUMBERS : ";
	int p,q;
	cin>>p>>q;
	number n1(p,q);
	n1.show();
	number n2=n1-2;
	n2.show();
    return 0;
}