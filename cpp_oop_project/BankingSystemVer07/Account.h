#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account{
private:
    int accID;
    int balance;
    char * cusName;
public:
    Account(int ID, int money, char * name); // 생성자
    Account(const Account & ref);   // 복사생성자

    int GetAccID() const;
    virtual void Deposit(int money);
    int Withdraw(int money);
    void ShowAccInfo() const;
    ~Account(); // 소멸자

};
#endif
