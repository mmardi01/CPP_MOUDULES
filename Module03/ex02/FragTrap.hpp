/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:42:47 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/17 21:04:13 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class  FragTrap: public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(const FragTrap& object);
		FragTrap& operator = (const FragTrap& object);
		void	attack(const std::string& target);
		void	highFivesGuys(void);
		~FragTrap();	
};

# endif