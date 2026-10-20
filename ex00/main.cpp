/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:24:55 by lpatin            #+#    #+#             */
/*   Updated: 2026/10/16 13:34:52 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	try{
		std::vector<int> v;
		std::vector<int>::iterator result;
		v.push_back(10);
		v.push_back(42);
		v.push_back(27);
		result = easyfind(v, 42);
		std::cout << *result << std::endl;
		result = easyfind(v, 5);
		std::cout << *result << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	return 0;
}