//
// Created by Anastasia CHEPURNA on 18.06.2018.
//

#include "Account.class.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) :
        _accountIndex(_nbAccounts++),
        _amount(initial_deposit),
        _nbDeposits(0),
        _nbWithdrawals(0)
{
    Account::_displayTimestamp();
    _totalAmount += initial_deposit;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
    Account::_nbAccounts--;
    Account::_displayTimestamp();
    std::cout \
	<< "index:" << _nbAccounts \
	<< ";amount:" << _amount \
	<< ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
   _nbDeposits++;
   _amount += deposit;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    _nbWithdrawals++;
    std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}

void Account::displayAccountsInfos()
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
    time_t		t;
    struct tm	*tm;
    char		buf[25];

    time(&t);
    tm = localtime(&t);

    strftime (buf, 25, "%Y%m%d_%H%M%S", tm);
    std::cout <<"[" << buf <<"] ";
}

void Account::displayStatus() const
{
    Account::_displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";amount:" << _amount
	<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

int Account::checkAmount() const
{
    return (_amount);
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}
