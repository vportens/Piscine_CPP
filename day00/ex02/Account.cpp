#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit) {
	this->_accountIndex = t::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	t::_nbAccounts += 1;
	t::_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	
	std::cout << "index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;

}

Account::Account(void) {

}



void	Account::makeDeposit( int deposit) {
	if (deposit <= 0)
	{
	Account::_displayTimestamp();
	std::cout << "sorry we accept only money to get inside, not ouside, for a deposit" << std::endl;
	return;
	
	}
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits + 1 << std::endl;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	t::_totalAmount += deposit;
	t::_totalNbDeposits += 1;
	
}

int	Account::getNbAccounts(void) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {

	return _totalNbWithdrawals;
}

void	Account::_displayTimestamp(void)
{
	std::time_t t = time(NULL);
	tm* ptr = localtime(&t);
	std::cout << "[" << ptr->tm_year + 1900 << std::setw(2) << std::right << std::setfill('0')
	<< ptr->tm_mon + 1 << std::setw(2) << std::right << std::setfill('0')
	<< ptr->tm_mday << "_" << std::setw(2) << std::right << std::setfill('0')
	<< ptr->tm_hour << std::setw(2) << std::right << std::setfill('0')
	<< ptr->tm_min << std::setw(2) << std::right << std::setfill('0')
	<< ptr->tm_sec << "]";

	return ;
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";accounts:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();
	std::cout << "accounts:" << t::_nbAccounts << ";total:" << t::_totalAmount << ";deposits" << t::_totalNbDeposits << ";withdrawals:" << t::_totalNbWithdrawals << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	if (this->_amount >= withdrawal)
	{
	Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount - withdrawal << ";nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		t::_totalAmount -= withdrawal;
		t::_totalNbWithdrawals += 1;
	return (true);
	}
	{
	Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
}

Account::~Account( void ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}
