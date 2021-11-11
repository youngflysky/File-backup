/*********************************************************************
    程序名: 个人银行账户管理程序
    日期: 2022-03-05 20:01
    说明:
*********************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

class SavingsAccount { //储蓄账户类
	private:
		int id;//账号
		double banlance;//余额
		double rate;//年利率
		int lastDate;//上次变更余额的时期
		double accumulation;//余额按日累加之和

		//记录一笔账，date为日期,amount为金额,desc为说明
		void record(int date, double amount);

		//获得到指定日期为止的存款金额按日累积值
		double accumulate(int date) const
		{
			return accumulation + banlance * (date - lastDate);
		}
	public:
		//构造函数
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

		//结算利息，每年1月1日调用一次该函数
		void settle(int date);

		//显示账户信息
		void show();
};


int main()
{


	return 0;
}



