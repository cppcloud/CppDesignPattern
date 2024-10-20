#pragma once
#include <string>

class Employee
{
	std::string m_Name;
	std::string m_Role;
public:

	Employee(const std::string& name, const std::string& role);
	std::string GetInfo() const;

	const std::string& GetName() const;
	const std::string& GetRole() const;
};

