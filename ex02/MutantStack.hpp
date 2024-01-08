/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:22:30 by tspoof            #+#    #+#             */
/*   Updated: 2024/01/08 13:53:54 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <list>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack();
	MutantStack(MutantStack const &instance);
	virtual ~MutantStack(){};
	MutantStack	&operator=(MutantStack const &instance);

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
	const_iterator begin() const
	{
		return (this->c.being());
	}
	const_iterator end() const
	{
		return (this->c.end());
	}
};

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &instance) : std::stack<T>(instance) {}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack const &instance)
{
	if (this != &instance)
		std::stack<T>::operator=(instance);
	return *this;
}

#endif
