/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:29:27 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/23 20:17:51 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <string>
#include <exception>
#include <map>
#include <fstream>

class BitcoinExchange {
 private:
  std::map<std::string, double>  _db;
 public:
  class WrongDb : public std::exception {
	  virtual const char* what() const throw();
  };
  class WrongInput : public std::exception {
	  virtual const char* what() const throw();
  };

  BitcoinExchange(const char* dbFileName, char* inputFileName);
  void	parseDb(const char* dbFileName);
  void	addLineToMap(std::string line, std::fstream& dbFile);
  void parseInput(char* inputFileName);
  void  printOutputByLine(std::string line);
};

#endif