/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_file.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:56:39 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/21 18:20:04 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "replace.hpp"

 void replace_file(std::string fileName, std::string s1, std::string s2) {
        std::ifstream MyFile(fileName.c_str());
        std::string newFileName = fileName + ".replace";
        std::ofstream NewFile(newFileName.c_str());
        std::string line;
        std::string text = "";
        
        if(MyFile) {
            while (1) {
                if (getline(MyFile, line)) {
                    line = line + "\n";
                    text = text + line;
                }
                else
                    break ;
            }   
            text = replace_line(text, s1, s2);
            NewFile << text;
        }
        else 
            std::cout << "FILE NOT FOUND\n";
 }
 