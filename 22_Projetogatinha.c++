#include <iostream>;
#include <stdio.h>;
using namespace std;
int main(){
    
	string str="Fala pedrao";
	char ch;
	for(int i=0; i<str.length();i++){
		ch=str.at(i);
		cout<<(int) ch;
	}
	return 0;
}
