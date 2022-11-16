/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:22:10 by mmardi            #+#    #+#             */
/*   Updated: 2022/11/04 14:39:19 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
  const std::string name;
  int grade;
  public:
    Bureaucrat();
    Bureaucrat(std::string _name, int _grade);
    Bureaucrat(const Bureaucrat& obj);
    Bureaucrat& operator = (const Bureaucrat& obj);
    ~Bureaucrat();
    std::string getName(void) const;
    int         getGrade(void) const;
    void        incrementGrade(void);
    void        decrementGrade(void);
    class GradeTooHighException : public std::exception {
      public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
      public:
        const char *what() const throw();
    };
};

std::ostream& operator << (std::ostream& out, const Bureaucrat& obj);

# endif