/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:35:57 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/28 22:08:28 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(unsigned int N) {
    capacity = N;
    size = 0;
}
void Span::addNumber(int n) {
    
    if (size < capacity) {
        s.push_back(n);
        size++;
    }
    else 
        throw OutOfRangeException();
}

int Span::shortestSpan(void) {
    int span = 0;
    if (size > 1){
        for(unsigned int i = 0; i < size; i++) {
            for (unsigned int j = 0; j < size; j++) {
                std::cout << "short\n";
                if (s[i] != s[j] && s[i] > s[j])
                    span =  (s[i] - s[j]) < span ? s[i] - s[j] : span;
            }
        }
        return span;
    }
    else
        throw OutOfRangeException();
}

int Span::longestSpan(void) {
    int span = 0;
    if (size > 1){
        for(unsigned int i = 0; i < size; i++) {
            for (unsigned int j = 0; j < size; j++) {
                std::cout << "longest\n";
                if (s[i] != s[j] && s[i] > s[j])
                    span =  (s[i] - s[j]) > span ? s[i] - s[j] : span;
            }
        }
        return span;
    }
    else
        throw OutOfRangeException();
}