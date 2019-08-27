#include<iostream>
#include<stdio.h>

using namespace std;

/***********************线性表***********************/
//顺序表
#define maxsize_seqlist 1000
typedef int datatype_seqlist;
typedef struct seqlist{						 
	datatype_seqlist data[maxsize_seqlist];//数据项，a0不用
	int last;//记录表长
}sequenlist;

class Tlinear_list{	//线性表 
	public:
		class Tsequen_list{	//顺序表 
			public:         
				sequenlist *Tdata;	//类中数据

				sequenlist *initSeqList();					//建空表 
				void setNull(sequenlist *L);				//置空表
				int length(sequenlist *L);					//求长度
				datatype_seqlist get(sequenlist *L,int i);	//取结点 
				int insert(sequenlist *L, datatype_seqlist x, int i);	//插入
				int _delete(sequenlist *L, int i);			//删除(位置)
				int locate(sequenlist *L, datatype_seqlist x);		//查找
				int delNote(sequenlist *L, datatype_seqlist x);//删除所有值为x的结点
				void printSeqList(sequenlist *L);			//输出
				int scanSeqList(sequenlist *L);

		};
};

//单链表


