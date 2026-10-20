/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:25:11 by lpatin            #+#    #+#             */
/*   Updated: 2026/10/20 13:45:45 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	try{
		srand(time(NULL));
		std::vector<int>	values(10000);
		Span sp(20500);
		std::cout << "---------- 10 000 values ----------" << std::endl;
		for (std::vector<int>::iterator it = values.begin(); it != values.end(); ++it)
			*it = rand() % 10000;
		sp.addRange(values.begin(), values.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "---------- 20 000 values ----------" << std::endl;
		for (std::vector<int>::iterator it = values.begin(); it != values.end(); ++it)
			*it = rand() % 20000;
		sp.addRange(values.begin(), values.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "---------- 30 000 values ----------" << std::endl;
		for (std::vector<int>::iterator it = values.begin(); it != values.end(); ++it)
			*it = rand() % 30000;
		sp.addRange(values.begin(), values.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	return 0;
}