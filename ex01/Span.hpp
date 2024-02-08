/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:12:43 by tspoof            #+#    #+#             */
/*   Updated: 2024/02/08 16:15:40 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
public:
	Span(unsigned int n);
	Span(Span const &other);
	~Span();
	Span &operator=(Span const &other);

	void addNumber(int number);
	template <typename Iterator>
	void addNumbers(Iterator begin, Iterator end)
	{
		if (std::distance(begin, end) > size)
			throw std::runtime_error("Span is too small!");
		numbers.insert(numbers.begin(), begin, end);
	}

	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;

	unsigned int getSize() const;

private:
	Span();
	unsigned int size;
	std::vector<int> numbers;
};

#endif
