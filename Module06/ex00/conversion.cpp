/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:59:42 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/23 16:04:43 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "conversion.hpp"

void convertToChar(std::string num) {
    
    char c = num[0];
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void convertToInt(std::string num) {

    int n = std::stof(num);
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    if (n >= 32 && n <= 127)
        std::cout << "char: " << static_cast<char>(n) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;   
    std::cout << "int: " << n << std::endl;
    std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(n) << std::endl; 
}

void convertToFloat(std::string num) {
    
    float n = std::stof(num);
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    if (n >= 32 && n <= 127)
        std::cout << "char: " << static_cast<char>(n) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;   
    std::cout << "int: " << static_cast<int>(n) << std::endl;
    std::cout << "float: " << n << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(n) << std::endl; 
}

void convertToDouble(std::string num) {
    
    double n = std::stod(num);
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    if (n >= 32 && n <= 127)
        std::cout << "char: " << static_cast<char>(n) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;   
    std::cout << "int: " << static_cast<int>(n) << std::endl;
    std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
    std::cout << "double: " << n << std::endl; 
}

void conversion(std::string num, std::string type) {
    
    if (type == "char")
        convertToChar(num);
    else if (type == "int")
        convertToInt(num);
    else if (type == "float")
        convertToFloat(num);
    else if (type == "double")
        convertToDouble(num);
}

std::string getType(std::string num) {

    for(unsigned int i = 0; i < num.length(); i++) {
        if (num.length() > 1 && num[num.length() - 1] == 'f')
            return "float";
        if (isascii(num[0]) && !isdigit(num[0]) && !num[1])
            return "char";
        if (num[i] == '.')
            return "double";
    }
    return "int";
}
