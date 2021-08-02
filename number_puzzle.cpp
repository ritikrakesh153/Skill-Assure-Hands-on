/* code for generating unique numbers 
betwwen 0 and 15 randomly 
*/
#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;


int random_generator()
{
    int a = rand()%16;
    return a;
}

int main()
{
int arr[16];
int check[16];
int num;

check[0]=1;
arr[15]=0;

for(int i=1;i<16;i++)
{
    check[i]=0;
}


for(int i=0;i<15;i++)
{
    num=random_generator();
    while(check[num]!=0)
    {
        num=random_generator();
    }
    arr[i]=num;
    check[num]=1;
    
}

for(int i=0;i<16;i++)
{
    cout<<arr[i]<<endl;
}



return 0;
}