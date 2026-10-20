/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:28:56 by lpatin            #+#    #+#             */
/*   Updated: 2026/10/20 13:46:33 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <stack>
#include <list>
#include <vector>

template<typename T>
class MutantStack : public std::stack<T>{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack();
		MutantStack(const MutantStack &cpy);
		MutantStack &operator =(const MutantStack &src);
		~MutantStack();
		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"
