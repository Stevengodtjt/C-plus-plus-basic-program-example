/* 
从输入文件in.txt中读取所有的整数(整数个数大于2)，
输出最小值整数
如:in.txt
34 5 78 9 2 89 -8 -1903 3234 
则:out.txt
-1903
注意：请勿删除注释语句。 
---------------------------------------------------------------------------------------------------*/ 
	/**********  Begin  **********/
#include<fstream>
using namespace std;
int main()
{ int b,c,min=0;
  ifstream infile("in.txt");
  ofstream outfile;
  outfile.open("out.txt");
  int a[9];
  for(b=0;b<9;b++)
  infile>>a[b];
  for(c=0;c<9;c++)
  if(a[c]<a[min])
  min=c;
  outfile<<a[min];
  return 0;

}









	/**********   End  ***********/

 
