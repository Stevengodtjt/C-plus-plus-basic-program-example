#include<iostream>
using namespace std;
int max_value( int array[3][4])
{  int i,j,max;
   max=array[0][0];
   for(i=0;i<3;i++)
   {   for(j=0;j<4;j++)
       { if(array[i][j]>max)
         max=array[i][j];
       }  
   }
   return  max;
}
int main()
{  int a[3][4]={{1,3,5,7},{2,4,6,8},{15,17,34,12}};
   cout<<"���ֵΪ:"<<max_value(a)<<'\n';
   return 0; 
}

