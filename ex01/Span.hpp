/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:12:43 by tspoof            #+#    #+#             */
/*   Updated: 2024/02/07 16:19:05 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
public:
	Span(unsigned int n);
	// span(iterator begin, iterator end)
	Span(Span const &other);
	~Span(void);
	Span &operator=(Span const &other);

	void addNumber(int number);
	int shortestSpan(void);
	int longestSpan(void);

	int getSize(void) const;

private:
	Span(void);
	unsigned int size;
	std::vector<int> numbers;
};

#endif
