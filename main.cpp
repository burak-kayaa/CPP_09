#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <map>

int	main()
{
	std::map<std::string, float> data;
	std::string file_name;
	std::string	tmp;

	file_name = "./bitcoin_prices.csv";
	std::ifstream file(file_name.c_str());
	while (std::getline(file, tmp))
	{
		std::istringstream ss(tmp);
		std::string date;
		float price;
		std::getline(ss, date, ',');
		ss >> price;
		data[date] = price;
	}
}
