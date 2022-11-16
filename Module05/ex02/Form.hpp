/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:09:18 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/11 22:00:53 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <fstream>

class Bureaucrat;

class Form {
        const std::string name;
        bool  status;
        const int sGrade;
        const int eGrade;
    public:
        Form();
        Form(const Form& object);
        Form(std::string _name, int _sGrade, int eGrade);
        Form& operator = (const Form& object);
        virtual ~Form();
        void    beSigned(Bureaucrat& object);
        bool    getStatus() const;
        std::string getName() const;
        int     getSgrade() const;
        int     getEgrade() const;
        void    execute(const Bureaucrat& object) const;
        virtual void action() const = 0;
        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };
};



std::ostream& operator << (std::ostream& out, const Form& obj);

#endif