#include"DATA_STR.hpp"

sequenlist *Tlinear_list::Tsequen_list::initSeqList(){
	sequenlist *L;
	L = (sequenlist*)malloc(sizeof(sequenlist));
	L->last = 0;
	return L;
}

void Tlinear_list::Tsequen_list::setNull(sequenlist *L) {
	L->last = 0;
}

int Tlinear_list::Tsequen_list::length(sequenlist *L) {
	return L->last;
}

datatype_seqlist Tlinear_list::Tsequen_list::get(sequenlist *L, int i) {
	return L->data[i];
}

int Tlinear_list::Tsequen_list::insert(sequenlist *L, datatype_seqlist x, int i) {
//O(n/2)
	if (L->last >= maxsize_seqlist - 1) {//上溢
		cout << "OVERFLOW!!!" << endl;
		return 0;
	}
	else if (i<1 || i>L->last + 1) {//插入位置不合法
		cout << "Wrongful insertion position!!!" << endl;
		return 0;
	}
	else {
		for (int j = L->last; j >= i; j--) {//结点后移
			L->data[j + 1] = L->data[j];
		}
		L->data[i] = x;//插入
		L->last++;
		return 1;
	}
}

int Tlinear_list::Tsequen_list::_delete(sequenlist *L, int i) {
//O((n-1)/2)
	if (i<1 || i>L->last) {//删除位置不合法
		cout << "Wrongful insertion position!!!" << endl;
		return 0;
	}
	else {
		for (int j = i; j <= L->last-1; j++) {//结点前移
			L->data[j] = L->data[j + 1];
		}
		L->last--;
		return 1;
	}
}

int Tlinear_list::Tsequen_list::locate(sequenlist *L, datatype_seqlist x) {
	for (int i = 1; i <= L->last; i++) {
		if (L->data[i] == x) {
			return i;
			break;
		}
	}
	//cout << "Not found!!!" << endl;	//加上之后，del_note错误输出
	return 0;
}

int Tlinear_list::Tsequen_list::delNote(sequenlist *L, datatype_seqlist x) {
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
	for (int k = locate(L, x); k; k = locate(L, x)) {
		if (!_delete(L, k)) {//个人认为没必要
			return 0;
			break;
		}
	}
	return 1;

}

void Tlinear_list::Tsequen_list::printSeqList(sequenlist *L) {
	for (int i = 1; i <= L->last; i++) {
		printf("a[%d] = ", i);
		cout << L->data[i] << endl;
	}
}

int Tlinear_list::Tsequen_list::scanSeqList(sequenlist *L) {
	cout<<"Enter a number of data and create a sequence table(End with '-1'):"<<endl;
	datatype_seqlist x;
	int i = L->last+1;//可以接尾插入
	for (cin >> x; x != -1; cin >> x,i++) {
		if (!insert(L, x, i)) {
			cout << "OVERFLOW!!!" << endl;
			return 0;
			break;
		}
	}
	return 1;
}