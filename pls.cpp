#include<iostream>
using namespace std;
int main()
 {
     int n;
     cout<<"Enter the number of elements of the array"<<endl;
     cin>>n;
     int avg=0;
     int * p= new int(n);
     int i;
     for(i=0;i<n;i++)
     {
         cout<<"Enter the number of elements of the array"<<endl;
         cin>>p[i];
         avg+=p[i];
     }
     cout<<"The Average is = " <<avg/n<<endl;
 }
