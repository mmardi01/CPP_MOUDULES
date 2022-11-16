/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:30:16 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/28 22:07:22 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Span.hpp"

int main() {

Span sp = Span(1000000);

for (int i = 0; i < 1000000; i++)
    sp.addNumber(i);
std::cout << "finiisheed\n";
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
}