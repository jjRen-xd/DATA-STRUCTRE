#include<iostream>

using namespace std;

/***********************线性表***********************/
//顺序表
typedef int dataType_seqlist;
typedef int dataType_linklist;
class Tlinear_list{	//线性表 
	public:
		class Tsequen_list{	//顺序表 
			public:
				Tsequen_list(int size){		//初始化空表
					maxsize_seqlist = size + 1;
					length = 0;
					data = new dataType_seqlist[maxsize_seqlist];
				}
				~Tsequen_list(){
					delete []data;
				}
				void setNull();											//置空表
				int getLength();										//求长度
				dataType_seqlist getNote(int position);					//取结点 
				bool insertNote(dataType_seqlist value, int position);	//插入
				bool pushBack(dataType_seqlist value);					//表末尾插入结点
				int getNotePos(dataType_seqlist value);					//查找
				bool delPos(int position);								//删除(位置)
				bool delNote(dataType_seqlist value);					//删除所有值为x的结点
				void printSeqList();									//输出
				bool scanSeqList();										//输入
			private:
				int maxsize_seqlist;	//表开辟空间的最大长度
				dataType_seqlist *data;	//数据项，data[0]不用
				int length;				//记录表长
		};

		class Tlink_list{	//单链表
			public:
				Tlink_list(){		//初始化空表(头结点)
					head = new note;
					head->next = NULL;
				}
				~Tlink_list(){

				}
				bool pushFront(dataType_linklist data);	//表头插入结点
				bool pushBack(dataType_linklist data);	//表尾插入结点
			private:
				typedef struct note{//单链表结点结构体
					dataType_linklist data;
					struct note *next;
				};
				
				note *head;			//头指针
				
		};
};




