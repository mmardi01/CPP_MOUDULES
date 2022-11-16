/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 01:09:13 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/03 18:16:06 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	public:
		void complain(std::string level);
};

# endif