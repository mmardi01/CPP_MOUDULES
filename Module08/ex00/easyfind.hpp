/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:44:21 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/26 18:48:36 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <iterator>

template <typename T>
bool easyfind(T a, int b) {
      typename T::iterator ptr = std::find(a.begin(), a.end(), b);
      if (ptr != a.end()) {
              return true;
      }
      return false;
}

#endif