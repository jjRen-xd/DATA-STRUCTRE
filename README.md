���Ա�
	˳���������10��������1�������
		�ṹ�壺
			#define maxsize_seqlist 1000
			typedef int datatype_seqlist;
			typedef struct{						 
				datatype_seqlist data[maxsize_seqlist];//�����a0����
				int last;//��¼����
			}sequenlist;

		�ࣺ
			ʹ��ʾ����Tlinear_list::Tsequen_list T_seqlist
			T_seqlist.��ʹ�ú���������
		
		0.Tdata��˳����ṹ��ָ��
			ֱ���������У�����ʹ��

		1.initSeqList()����ʼ��˳���
			����ֵ����
			����ֵ��˳����ṹ���ָ��

		2.setNull()����˳����ÿ�
			����ֵ��˳���ָ��*L
			����ֵ����

		3.length():��˳�������
			����ֵ��˳���ָ��*L
			����ֵ�������ͣ�˳�������

		4.get()��ȡ���
			����ֵ��˳���ָ��*L����������i
			����ֵ����������datatype���ͣ���int���������Ž��

		5.insert()����ָ��λ�ò�����
			����ֵ��˳���ָ��*L,��������ļ�ֵx�������ָ��λ��i
			����ֵ������״̬����0��1(int)
				0������ʧ�ܣ��������˳������磬�����λ�ò��Ϸ�
				1������ɹ�

		6._delete()��ɾ��ָ��λ�õĽ��
			����ֵ��˳���ָ��*L,��ɾ������λ��i
			����ֵ��ɾ��״̬����0��1(int)
				0��ɾ��ʧ�ܣ���ɾ��λ�ò��Ϸ�
				1��ɾ���ɹ�

		7.locate()����λָ����ֵ��λ�ã�ֻ���ҵ�һ����
			����ֵ��˳���ָ��*L,�����ҵļ�ֵx
			����ֵ������λ��״̬����0������(int)
				0������ʧ�ܣ���˳�����û�иü�ֵ�Ľ��
				���������ҳɹ�������ֵ��Ϊ�ü�ֵ��һ������λ��

		8.delNote()��ɾ������ָ����ֵ�Ľ��
			����ֵ��˳���ָ��*L,����ɾ���ļ�ֵx
			����ֵ��ɾ��״̬����0��1(int)
				0��ɾ��ʧ�ܣ����۲����ڣ�
				1��ɾ���ɹ�

		9.printSeqList����ӡ������н����Ϣ
			����ֵ��˳���ָ��*L
			����ֵ���� 

		10.scanSeqList���������ݲ����뵽˳�����
			����ֵ��˳���ָ��*L
			����ֵ����
			����ֵ�����������ݣ���'-1'��β