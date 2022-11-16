/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:36:00 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/28 22:00:19 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>

class Span {
    std::vector<int> s;
    unsigned int capacity;
    unsigned int size;
    public:
        Span(unsigned int N);
        void addNumber(int n);
        int shortestSpan(void);
        int longestSpan(void);
        class OutOfRangeException : public std::exception {
            // public:
            //     const char *what() const throw();
        };
};

# endif 