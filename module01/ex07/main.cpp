/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 23:44:08 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/08 08:59:02 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void		changeWord(std::string& buf, char *argv[])
{
	std::string		toFind(argv[2]);
	std::string		toReplace(argv[3]);

	while (buf.find(toFind, 0) != std::string::npos)
		buf.replace(buf.find(toFind, 0), toFind.length(), toReplace);
}

void		replaceAll(char *argv[], \
				std::ifstream& inputFile, std::ofstream& outputFile)
{
	std::string		buffer;

	while (inputFile.peek() != EOF)
	{
		std::cout << "\tReading a line...\n";
		std::getline(inputFile, buffer);
		changeWord(buffer, argv);
		outputFile << buffer << '\n';
	}
}

void		openFile(char *argv[])
{
	std::string		fileName(argv[1]);
	std::ifstream	inputFile;
	std::ofstream	outputFile;

	inputFile.open(fileName);
	if (!inputFile.is_open())
	{
		std::cout << "Fail to open input file.\n";
		return ;
	}
	outputFile.open(fileName + ".replace");
	if (!outputFile.is_open())
	{
		std::cout << "Fail to open output file.\n";
		inputFile.close();
		return ;
	}
	std::cout << "Files are open well\nStart replacement!\n";
	replaceAll(argv, inputFile, outputFile);
	std::cout << "Complete replacement!\nClosing Files...\n";
	outputFile.close();
	inputFile.close();
}

int			main(int argc, char *argv[])
{
	if (argc != 4)
		std::cout << "Wrong Arguments.\n";
	else
		openFile(argv);
}
