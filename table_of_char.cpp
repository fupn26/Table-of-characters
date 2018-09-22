#include "std_lib_facilities.h"

int main()
{
char a = 'a';
int b;
int c = 0;
while (c<26){
	b = a;
	cout<<a<<'\t'<<b<<'\n';
	++a;
	++c;
	}	
}
