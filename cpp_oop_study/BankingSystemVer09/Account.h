#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include "String.h"

class Account
{
private:
	int accID;
	int balance;
//	char * cusName;
	String cusName;
public:
//	Account(int ID, int money, char * name);
	Account(int ID, int money, String name);
//	Account(const Account & ref);
//	Account& operator=(const Account& ref);

	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
//	~Account();
};
#endif
