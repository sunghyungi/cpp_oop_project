#ifndef __HiGHCREDIT_ACCOUNT_H_
#define __HiGHCREDIT_ACCOUNT_H_

#include "NormalAccount.h"
#include "String.h"

class HighCreditAccount : public NormalAccount
{
private:
    int specialRate;
public:
//    HighCreditAccount(int ID, int money, char * name, int rate, int special)
    HighCreditAccount(int ID, int money, String name, int rate, int special)
        : NormalAccount(ID, money, name, rate), specialRate(special)
    { }
    virtual void Deposit(int money)
    {
        NormalAccount::Deposit(money);
        Account::Deposit(money*(specialRate/100.0));
    }
};
#endif
