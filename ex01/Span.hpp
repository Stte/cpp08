/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 09:55:13 by tspoof            #+#    #+#             */
/*   Updated: 2024/02/07 10:01:56 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class Span
{
public:
	Span();
	Span(Span const &other);
	virtual ~Span(){};
	Span &operator=(Span const &other);

	void addNumber();
	void shortestSpan();
	void longestSpan();

private:

};

#endif
