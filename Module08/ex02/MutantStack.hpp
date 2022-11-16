/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:48:15 by mmardi            #+#    #+#             */
/*   Updated: 2022/11/11 21:32:54 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>

template <typename T>
class   MutantStack : public  std::stack<T> {        
public:
    typedef typename MutantStack::container_type::iterator iterator;
    MutantStack(){};
    MutantStack(const MutantStack& obj) {
        *this = obj;
    }
    MutantStack&  operator = (MutantStack& obj){
        this->c = obj.c;
        return *this;
    }
    iterator begin(){
        return this->c.begin();
    }
    iterator end(){
        return this->c.end();
    }
    ~MutantStack(){
        this->c.clear();
    };
};



#endif