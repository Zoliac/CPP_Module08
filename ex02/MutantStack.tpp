/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:30:09 by lpatin            #+#    #+#             */
/*   Updated: 2026/10/16 13:34:26 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(){
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &cpy) : std::stack<T>(cpy){
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator =(const MutantStack<T> &src){
	if (this != &src){
		std::stack<T>::operator=(src);
	}
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
	return (this->c.end());
}

template<typename T>
MutantStack<T>::~MutantStack(){
}
