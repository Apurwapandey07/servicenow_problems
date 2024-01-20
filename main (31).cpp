/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <unordered_set>

using namespace std;
int sum_of_unique_number(int arr[],int n) {
unordered_set<int> unique_numbers;
for(int i=0;i<n;i++){
    unique_numbers.insert(arr[i]);
}
int unique_sum=0;
for(int num:unique_numbers){
    unique_sum+=pow(2,num);
}
return unique_sum ;
}
int main()
{
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int input_array[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>input_array[i];
    }
    int result=sum_of_unique_number(input_array,n);
    cout<<"Result:"<<result;

    return 0;
}