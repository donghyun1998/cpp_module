#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts; // 계좌 개수
int	Account::_totalAmount; // 총 잔고
int	Account::_totalNbDeposits; // 총 예금 횟수
int	Account::_totalNbWithdrawals; // 총 출금 횟수 // 있는데 왜 안된다는겨
 // static은 또 왜 넣으면 안되는겨

int	Account::getNbAccounts( void ) {
	return(_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits << ";withdrawals:"
			<< _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit ) {
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	std::cout << " index:" << _accountIndex << ";amount:" << initial_deposit
			<< ";created" << std::endl;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
}

Account::~Account( void ) {
	//[19920104_091532] index:7;amount:8942;closed
	_totalAmount -= _amount;
	_nbAccounts -= 1;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount
			<< ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount - deposit
			<< ";deposit:" << deposit << ";amount:" << _amount
			<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) { // 왜 불??? 조건도 없는데
	// [19920104_091532] index:0;p_amount:47;withdrawal:refused
	// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;
	_amount -= withdrawal;
	if (checkAmount()) {
		_totalAmount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		std::cout << ";withdrawal:" << withdrawal
				<< ";amount:" << _amount
				<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	else {
		_amount += withdrawal;
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
}
int		Account::checkAmount( void ) const {
	if (_amount < 0)
		return (0);
	return (1);
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	time_t	t;
	char	buffer[16];

	time(&t);
	strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", localtime(&t));
	std::cout << "[" << buffer << "]";
}
// Account::Account(void) // ??? 뭐임

