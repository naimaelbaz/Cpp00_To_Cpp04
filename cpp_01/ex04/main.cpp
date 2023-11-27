/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:15:19 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/27 11:37:58 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replaceString(std::string& str, std::string s1, std::string s2)
{
	if (!s1.empty())
	{
		size_t pos = str.find(s1);
		while (pos != std::string::npos)
		{
			str.erase(pos,s1.length());
			str.insert(pos, s2);
			pos = str.find(s1, pos + s2.length());
		}
	}
}

int main(int ac, char *av[])
{
	std::string str;

	if(ac == 4)
	{
		std::string File = av[1];
		std::ifstream is(File);
		if (is.good()) {
			std::string readFile;
			std::string replaceFile = File + ".replace";
			std::ofstream os(replaceFile);
			if(!os.good())
			{
				std::cout << "Failed to open file: " << File << "\n";
				return(0);
			}
			std::getline(is, readFile, '\0');
			replaceString(readFile, av[2], av[3]);
			os << readFile;
			if(is.is_open())
				is.close();
			if(os.is_open())
				os.close();
		} else {
			std::cout << "Failed to open file: " << File << "\n";
		}
	}
	else
		std::cout<<"invalid number of args!!!\n";
	return 0;
}