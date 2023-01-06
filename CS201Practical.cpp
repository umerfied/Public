#include <iostream>
using namespace std;
main()   {
	int sum,i;
	sum = 8+1;
	cout<<"VU220201031"<<endl;
	cout<<"The sum of the First and Last VU Id is:"<<sum<<endl;
	if (sum >= 7){
		for (int i = 1; i <= sum; i = i+1) {
  cout << "Welcome to VU" << endl;
		}
	}
	else if(sum < 7){
		for (int i = 1; i <= sum; i = i+1) {
  cout << "Welcome to CS201P" << endl;
		}
	}
}