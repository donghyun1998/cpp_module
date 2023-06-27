#include "Account.hpp"
#include <iostream>

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
// void	Account::displayAccountsInfos( void )


// Account::Account( int initial_deposit );
// Account::~Account( void );
// void	Account::makeDeposit( int deposit );
// bool	Account::makeWithdrawal( int withdrawal );
// int		Account::checkAmount( void ) const;
// void	Account::displayStatus( void ) const;
void	Account::_displayTimestamp( void )
{
	time_t	tv;
	char	buffer[16];

	time(&tv);
	strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", localtime(&tv));
	std::cout << "[" << buffer << "]";
}
