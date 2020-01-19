#include "BankingCommonDecl.h"
#include "Account.h"

Account::Account(int ID, int money, char* name) // 생성자
    : accID(ID), balance(money)
{
    cusName=new char[strlen(name)+1];
    strcpy(cusName, name);
}

Account::Account(const Account & ref)     // 복사 생성자
    : accID(ref.accID), balance(ref.balance)
{
    cusName=new char[strlen(ref.cusName)+1];
    strcpy(cusName, ref.cusName);
}

int Account::GetAccID() const {return accID;}   // 계좌번호 반환 함수

void Account::Deposit(int money)    // 예금
{
    balance+=money;
}

int Account::Withdraw(int money) // 인출
{
    if(balance<money) return 0;

    balance-=money;
    return money;
}

void Account::ShowAccInfo() const
{
    cout<<"계좌ID: "<<accID<<endl;
    cout<<"이 름:"<<cusName<<endl;
    cout<<"잔 액:"<<balance<<endl;
}

Account::~Account()
{
    delete []cusName;
}
