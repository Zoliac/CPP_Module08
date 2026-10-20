/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:24:46 by lpatin            #+#    #+#             */
/*   Updated: 2026/10/20 13:45:35 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
typename T::iterator easyfind(T& container, int nbr)
{
	typename T::iterator it = std::find(container.begin(), container.end(), nbr);
	if (it == container.end())
		throw std::exception();
	else
		return (it);
}
