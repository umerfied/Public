#include <iostream>
#include <algorithm>
using namespace std;
//BC220201031


int num[3][3]= {{56,27,9},{25,32,18},{88,11,23}};
int k;
void display(){
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  {
   cout<<num[i][j]<<"   ";
  }
  cout<<endl;
 }
}
void sortRow(){
	for(int i=0;i<3;i++)
	{
		for(int k=1;k<=2;k++)
		for(int j=0;j<3;j++) //&& int k=1;k<2;k++) 
		{
			if(num[i][j]>num[i][k]){
				swap(num[i][j],num[i][k]);
			}
		}
	}
}
void sortCol(){
	sortRow();
	for(int i=0;i<3;i++)
		{
			for(int k=1;k<=2;k++)
			for(int j=0;j<3;j++) //&& int k=1;k<2;k++) 
		{
				if(num[j][i]>num[k][i]){
					swap(num[j][i],num[k][i]);
			}
		}
		
	}
}
void diagonalSum(){
	int sum;
	sum = num[0][0]+num[1][1]+num[2][2];
	cout<<sum;
}
int main(){
cout<<"RowWise Sorted arrays:"<<endl;
sortRow();
display();
cout<<endl<<"Sum of Diagonal Elements for RowWise Sorted Arrays is:";
diagonalSum();
cout<<endl<<endl<<"ColWise sorted arrays:"<<endl;
sortCol();
display();
cout<<endl<<"Sum of Diagonal Elements for ColWise Sorted arrays is:";
diagonalSum();
	return 0;
}
			