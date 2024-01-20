/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    int originalnum=num;
    while (num>=10){
        int sum=0;
        while(num>0) {
            sum+=num%10;
            num/=10;
        }
        num=sum;
    }
    int product=originalnum*num;
    cout<<"product of num is:"<<product<<endl;

    return 0;
}

