#include"DATA_STR.hpp"

/******************************************顺序表********************************************/
void Tlinear_list::Tsequen_list::setNull() {
	this->length = 0;
}

int Tlinear_list::Tsequen_list::getLength() {
	return this->length;
}

dataType_seqlist Tlinear_list::Tsequen_list::getNote(int position) {
	return this->data[position];
}

bool Tlinear_list::Tsequen_list::insertNote(dataType_seqlist value, int position) {
//O(n/2)
	if (this->length >= maxsize_seqlist) {//上溢
		cout << "OVERFLOW!!!" << endl;
		return 0;
	}
	else if (position<1 || position>this->length + 1) {//插入位置不合法
		cout << "Wrongful insertion position!!!" << endl;
		return 0;
	}
	else {
		for (int j = this->length; j >= position; j--) {//结点后移
			this->data[j + 1] = this->data[j];
		}
		this->data[position] = value;//插入
		this->length++;
		return 1;
	}
}

bool Tlinear_list::Tsequen_list::delPos(int position) {
//O((n-1)/2)
	if (position<1 || position>this->length) {//删除位置不合法
		cout << "Wrongful insertion position!!!" << endl;
		return 0;
	}
	else {
		for (int j = position; j <= this->length-1; j++) {//结点前移
			this->data[j] = this->data[j + 1];
		}
		this->length--;
		return 1;
	}
}

int Tlinear_list::Tsequen_list::getNotePos(dataType_seqlist value) {
	for (int i = 1; i <= this->length; i++) {
		if (this->data[i] == value) {
			return i;
			break;
		}
	}
	//cout << "Not found!!!" << endl;	//加上之后，del_note错误输出
	return 0;
}

bool Tlinear_list::Tsequen_list::delNote(dataType_seqlist value) {
	/*	课本给出
	int k = locate(L,x);	
	while (k) {//查找到，执行循环体
		if (!_delete(L, k)) {//个人认为没必要
			return 0;
			break;
		}
		k = locate(L, x);
	}
	return 1;
	*/
	for (int k = getNotePos(value); k; k = getNotePos(value)) {
		if (!delPos(k)) {//个人认为没必要
			return 0;
			break;
		}
	}
	return 1;

}

bool Tlinear_list::Tsequen_list::pushBack(dataType_seqlist value){
	if(!insertNote(value,this->length+1))
		return 0;
	return 1;
}

void Tlinear_list::Tsequen_list::printSeqList() {
	for (int i = 1; i <= this->length; i++) {
		cout <<"data["<<i<<"] = "<<this->data[i] << endl;
	}
	if(this->length < 1)
		cout<<"The sequenList is empty!"<<endl;
}

bool Tlinear_list::Tsequen_list::scanSeqList() {
	cout<<"Enter a number of data and create a sequence table(End with '-1'):"<<endl;
	dataType_seqlist x;
	int i = this->length+1;//可以接尾插入
	for (cin >> x; x != -1; cin >> x,i++) {
		if (!insertNote(x, i)) {
			cout << "OVERFLOW!!!" << endl;
			return 0;
			break;
		}
	}
	return 1;
}
/******************************************单链表********************************************/
bool Tlinear_list::Tlink_list::pushFront(dataType_linklist data){
	note *tempNote = new note;
	tempNote->data = data;
	tempNote->next = this->head->next;
	this->head->next = tempNote;
}

bool Tlinear_list::Tlink_list::pushBack(dataType_linklist data){
	
}
