/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:32:23 by lpatin            #+#    #+#             */
/*   Updated: 2026/10/16 13:32:24 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <vector>
#include <list>
#include <algorithm>
#include <climits>

class Span{
	private:
		std::vector<int> _tab;
		unsigned int _capacity;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		Span &operator =(const Span &src);
		~Span();
		std::vector<int> getTab();
		void addNumber(int nbr);
		int shortestSpan();
		int longestSpan();
		template<typename Iterator>
		void addRange(Iterator first, Iterator last){
			int rangeLength = std::distance(first, last);
			if (rangeLength + _tab.size() > _capacity)
				throw std::out_of_range("too much element compared to capacity");
			_tab.insert(_tab.end(), first, last);
		}
};