/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:14:55 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/13 17:49:24 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <cstdint>

struct Data
{
    int dummy;
};


class Serializer { // 얘도 static class
 private:
  Serializer();
  Serializer(const Serializer& obj);
  ~Serializer();
  Serializer& operator=(const Serializer& obj);
 public:
  static uintptr_t serialize(Data* ptr);
  static Data* deserialize(uintptr_t raw);
};

#endif
