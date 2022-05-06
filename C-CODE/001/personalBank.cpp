/*********************************************************************
    ������: ���������˻��������
    ����: 2022-03-05 20:01
    ˵��:
*********************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

class SavingsAccount { //�����˻���
	private:
		int id;//�˺�
		double banlance;//���
		double rate;//������
		int lastDate;//�ϴα������ʱ��
		double accumulation;//�����ۼ�֮��

		//��¼һ���ˣ�dateΪ����,amountΪ���,descΪ˵��
		void record(int date, double amount);

		//��õ�ָ������Ϊֹ�Ĵ������ۻ�ֵ
		double accumulate(int date) const
		{
			return accumulation + banlance * (date - lastDate);
		}
	public:
		//���캯��
		SavingsAccount(int date, int id, double rate);
		int getId() {
			return id;
		}
		double getBanlance() {
			return banlance;
		}
		double getRate() {
			return rate;
		}
		void deposit(int date, double amount);
		void withdraw(int date, double amount);

		//������Ϣ��ÿ��1��1�յ���һ�θú���
		void settle(int date);

		//��ʾ�˻���Ϣ
		void show();
};


int main()
{


	return 0;
}



