#ifndef __NORMAL_ACCOUNT_H__
#define __NORMAL_ACCOUNT_H__

#include "Account.h"
#include "String.h"
#include "AccountException.h"

class NormalAccount : public Account  // Account 클래스 상속 
{
private:
    int interRate;  // 이자율 (%단위)
public:
//    NormalAccount(int ID, int money, char * name, int rate)
    NormalAccount(int ID, int money, String name, int rate) // 생성자
        : Account(ID, money, name), interRate(rate)
    { }
    virtual void Deposit(int money) // 예금 가상 함수
    {
    	if(money <0)
    		throw MinusException(money);
    	Account::Deposit(money);    // 원금추가
    	Account::Deposit(money*(interRate/100.0));  // 이자 추가
    }
};
#endif
