#include<iostream>
#include"DATA_STR.hpp"

using namespace std;

void seqlist_test();

int main(){
	seqlist_test();
	return 0;
}

void seqlist_test(void) {
	Tlinear_list::Tsequen_list T_seqlist(10);
	for(int i = 1;i<10;i++){
		T_seqlist.pushBack(i);
	}
	T_seqlist.printSeqList();
	T_seqlist.delNote(4);
	T_seqlist.printSeqList();
	T_seqlist.getNotePos(5);
	T_seqlist.insertNote(100,2);
	T_seqlist.printSeqList();
	cout<<T_seqlist.getNotePos(3)<<endl;
	cout<<T_seqlist.getLength()<<endl;
	T_seqlist.setNull();
	T_seqlist.printSeqList();
}