/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:52:31 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/01 10:59:57 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

void replace_file(std::string fileName, std::string s1, std::string s2);
std::string replace_line(std::string line, std::string s1, std::string s2);

# endif