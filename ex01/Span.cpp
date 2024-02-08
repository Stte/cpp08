/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:13:06 by tspoof            #+#    #+#             */
/*   Updated: 2024/02/08 17:20:40 by tspoof           ###   ########.fr       */
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
	if (this == &other)
		return *this;
	numbers.clear();
	numbers.assign(other.numbers.begin(), other.numbers.end());
	size = other.size;

	return *this;
}

unsigned int Span::getSize(void) const
{
	return size;
}

void Span::addNumber(int number)
{
	if (numbers.size() >= size)
		throw std::runtime_error("Span is full!");
	numbers.push_back(number);
}

unsigned int Span::shortestSpan(void) const
{
	if (numbers.size() < 2)
		throw std::runtime_error("Span is too small!");
	std::vector<int> sorted = numbers;
	std::sort(sorted.begin(), sorted.end());
	unsigned int shortest = UINT_MAX;
	unsigned int diff;
	for (unsigned int i = 1; i < sorted.size(); i++)
	{
		diff = std::abs(sorted[i] - sorted[i - 1]);
		if (diff < shortest)
			shortest = diff;
	}
	return shortest;
}

unsigned int Span::longestSpan(void) const
{
	if (numbers.size() < 2)
		throw std::runtime_error("Span is too small!");
	std::vector<int> sorted = numbers;
	std::sort(sorted.begin(), sorted.end());
	return sorted.back() - sorted.front();
}
