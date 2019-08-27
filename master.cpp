#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include"DATA_STR.hpp"

void seqlist_test();

int main(){
	seqlist_test();
	system("pause");
	return 0;
}

void seqlist_test(void) {
	Tlinear_list::Tsequen_list T_seqlist;

	T_seqlist.Tdata = T_seqlist.initSeqList();		//初始化
	cout << "(init)len = " << T_seqlist.length(T_seqlist.Tdata) << endl;//取长度
	for (int i = 1; i < 5; i++) {
		T_seqlist.insert(T_seqlist.Tdata, i, i);			//插入1-4
	}
	cout << "(insert 1~4)len = " << T_seqlist.length(T_seqlist.Tdata) << endl;//取长度
	T_seqlist._delete(T_seqlist.Tdata, 1);			//删除1
	cout << "(delete 1)len = " << T_seqlist.length(T_seqlist.Tdata) << endl;//取长度
	T_seqlist.printSeqList(T_seqlist.Tdata);
	cout << "position(3) = " << T_seqlist.locate(T_seqlist.Tdata, 3) << endl;//查找2
	T_seqlist.setNull(T_seqlist.Tdata);				//置空
	cout << "(setnull)len = " << T_seqlist.length(T_seqlist.Tdata) << endl;//取长度
	for (int i = 1; i < 5; i++) {
		T_seqlist.insert(T_seqlist.Tdata, 2, i);			//插入4个2
	}
	T_seqlist.printSeqList(T_seqlist.Tdata);
	cout << "(insert 4*2)len = " << T_seqlist.length(T_seqlist.Tdata) << endl;//取长度
	T_seqlist.delNote(T_seqlist.Tdata, 2);
	cout << "(delnote 2)len = " << T_seqlist.length(T_seqlist.Tdata) << endl;//取长度

	T_seqlist.scanSeqList(T_seqlist.Tdata);
	T_seqlist.printSeqList(T_seqlist.Tdata);

}