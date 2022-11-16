/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 00:34:32 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/16 17:13:52 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	protected:
		std::string name;
		int hitPoints;
		int energy;
		int AD;
	public:
		ClapTrap(); // Default constructor
		ClapTrap(std::string _name); // Name setter constructor
		ClapTrap(const ClapTrap& object); // Copy constructor
		ClapTrap& operator = (const ClapTrap& object); // Copy assingment operator
		~ClapTrap(); // Destructor
		void		attack(const std::string& target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);
		std::string	getName(void) const;
};

# endif