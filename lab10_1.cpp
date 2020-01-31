// ";
// cout << "You will get A in this 261102.";
#include<bits/stdc++.h>
using namespace std;
int main(){
	srand(time(0));
	int a=rand()%9+1;
	string t;
	switch(a){
		case 1:
			t="A";
		break;
		case 2:
			t="B+";
		break;
		case 3:
			t="B";
		break;
		case 4:
			t="C+";
		break;
		case 5:
			t="C";
		break;
		case 6:
			t="D+";
		break;
		case 7:
			t="D";
		break;
		case 8:
			t="F";
		break;
		case 9:
			t="W";
		break;
	}
	cout << "Press Enter 3 times to reveal your future.";
	cin.get();
	cin.get();
	cin.get();
	cout<<"You will get "<<t<<" in this 261102.";
}
