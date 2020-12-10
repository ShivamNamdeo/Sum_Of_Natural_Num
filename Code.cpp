#include <iostream>

using namespace std;


int sum_num(int n){
	if(n==0){
		return 0;
	}else{
		return sum_num(n-1) + n;
	}
}

int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n,sum=0;

	cin>>n;

	cout<<sum_num(n);

	return 0;

}


