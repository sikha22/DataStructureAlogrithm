#include <iostream>
using namespace std;

void input(int* x, int xLen){
    int var; 
    for(int i =0; i< xLen; i++){
        std::cout << "Enter "<<i<< " element into array" << std::endl;
        std::cin >> x[i];
    }
}
void show(int* x, int xLen){
    for(int i =0; i< xLen; i++)
        std::cout << " " << x[i] ;
}

void merge (int* xa, int xaLen, int* xb, int xbLen, int* c, int cLen ){
    int locA, locB, locC; 
    for(locA=0, locB=0, locC=0; locA < xaLen || locB <xbLen; locC++ ){
        if(xa[locA] < xb[locB]){
            c[locC] = xa[locA];
            locA++;
        }
        else {
            c[locC] = xb[locB];
            locB++;
        }
    }
    
    if (locA > xaLen){
        for(locB-- ; locB < xbLen; locB++, locC++){
            c[locC] = xb[locB];
            
        }
    }
    else{
        for( locA--; locA < xaLen; locA++, locC++){
            c[locC] = xb[locA];
        }
    }
}
int main()
{
    int a[10], b[10], c[25];
    int aLen, bLen, cLen;
    int len; 
    
    std::cout << "enter size of array a" << std::endl;
    std::cin >> aLen;
    input(a, aLen);
    show(a, aLen);
    
    std::cout << "enter size of array b" << std::endl;
    std::cin >> bLen;
    input(b, bLen);
    show(b, bLen);
    
    cLen = aLen + bLen;
    merge(a, aLen, b, bLen, c, cLen);
    std::cout << "Element of C " << std::endl;
    show(c, cLen);
    return 0;
}

