#include <iostream>

using namespace std;

int n,m;
int main(void){
	
	cin >> n >> m;
	//높이가 중요함
	if(n==1) cout << '1';
	else if(n==2) {
		if((m+1)/2 > 4){
			cout << 4;
		}else cout << (m+1)/2;
	}else{
		if(m>=7) cout << m-2;
		else{
			cout << min(m, 4);
		}
	}
}
