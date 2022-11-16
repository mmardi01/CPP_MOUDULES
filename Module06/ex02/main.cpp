/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:10:53 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/24 23:05:23 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include "Base.hpp"

Base * generate(void) {

    srand(time(NULL));
    int s = rand() % 3;
    if (s == 0){
        A *a = new A;
        return dynamic_cast<Base*>(a);
    }
    else if (s == 1){
        B* b = new B;
        return dynamic_cast<Base*>(b);
    }
    else {
        C* c = new C;
        return dynamic_cast<Base*>(c);
    }
}

void identify(Base* p) {

    if (dynamic_cast<A*>(p))
        std::cout << "type A\n";
    else if (dynamic_cast<B*>(p))    
        std::cout << "type B\n"; 
    else
        std::cout << "type C\n"; 
        
}

void identify(Base& p) {
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "type A\n"; 
        (void)a;
    }
    catch(std::bad_cast exp)
    {
    }
    try
    {
        B& b = dynamic_cast<B&>(p);
        std::cout << "type B\n";
        (void)b;
    }
    catch(std::bad_cast exp)
    {
    }
    try
    {
        C& c = dynamic_cast<C&>(p);
        std::cout << "type C\n";
        (void)c;
    }
    catch(std::bad_cast exp)
    {
    }
}
int main() {

   Base*  base = generate();
   identify(*base);
   identify(base);
   delete base;
}