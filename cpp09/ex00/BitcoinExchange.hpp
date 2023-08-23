/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:29:27 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/23 15:28:02 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <string>
#include <exception>
#include <map>

class BitcoinExchange {
 private:
  std::map<std::string, double>  _db;
 public:
  BitcoinExchange();
  BitcoinExchange(const BitcoinExchange& obj);
  ~BitcoinExchange();
  BitcoinExchange& operator=(const BitcoinExchange& obj);
};

#endif

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj) {}
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj) {}
