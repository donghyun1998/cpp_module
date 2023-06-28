#include "Account.hpp"
#include <iostream>

static int	_nbAccounts;
static int	_totalAmount;
static int	_totalNbDeposits;
static int	_totalNbWithdrawals;

int	Account::getNbAccounts( void )
{
	return(_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits); // 웨 토탈?
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals); // 왜 토탈?
}
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	//accounts:8;total:20049;deposits:0;withdrawals:0
	std::cout << " accounts:" <<
}


Account::Account( int initial_deposit )
{
	//[19920104_091532] index:0;amount:42;created
}
// Account::~Account( void ); //[19920104_091532] index:7;amount:8942;closed
// void	Account::makeDeposit( int deposit );
// bool	Account::makeWithdrawal( int withdrawal );
// int		Account::checkAmount( void ) const;
// void	Account::displayStatus( void ) const; //[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	Account::_displayTimestamp( void )
{
	time_t	t;
	char	buffer[16];

	time(&t);
	strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", localtime(&t));
	std::cout << "[" << buffer << "]";
}
// Account::Account(void)
// {

// }
