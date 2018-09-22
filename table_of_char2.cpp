#include "std_lib_facilities.h"

int main()
{
char ch = 'a';
char ch_cap = 'A';
char ch_num = '0';
for (int i = 0; i<26; ++i){
	if (i<10)
		cout<<ch<<'\t'<<int(ch)<<'\t'<<ch_cap<<'\t'<<int(ch_cap)<<'\t'<<ch_num<<'\t'<<int(ch_num)<<'\n';
	else
		cout<<ch<<'\t'<<int(ch)<<'\t'<<ch_cap<<'\t'<<int(ch_cap)<<'\n';
	++ch;
	++ch_cap;
	++ch_num;
	}
}
