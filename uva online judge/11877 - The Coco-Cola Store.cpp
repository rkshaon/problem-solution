#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int n,con;
    float coca;
    while(1){
        scanf("%d",&n);
        if(n==0)break;
        coca=((float)n*3-1)/2;
        con=ceil(coca);
        cout<<con-n<<endl;
        }
    return 0;
}
