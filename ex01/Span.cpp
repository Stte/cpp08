/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:13:06 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/22 20:30:02 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : size(n)
{
}

Span::Span(Span const &other)
{
	*this = other;
}

Span::~Span(void)
{
}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		numbers.clear();
		numbers.assign(other.numbers.begin(), other.numbers.end());
	}
	return *this;
}

int Span::getSize(void) const
{
	return size;
}
