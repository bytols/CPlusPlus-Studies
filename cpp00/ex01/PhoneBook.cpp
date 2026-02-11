/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 22:51:10 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/16 14:26:11 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"


PhoneBook::PhoneBook(void)
{
    this->book_index = 0;
    this->all_contacts = 0;
    return ;
}


PhoneBook::~PhoneBook(void)
{
    std::cout << "Closing PhoneBook" << std::endl; 
    return ;
}

void    PhoneBook::increment_index(void){
    this->all_contacts++;
    this->book_index = this->all_contacts % 8;
}

int     PhoneBook::get_index(void)
{
    return (this->book_index);   
}

int     PhoneBook::get_all_contacts(void)
{
    return (this->all_contacts);   
}


int     PhoneBook::check_valid_string(std::string str)
{
    for (int i = 0; i < (int)str.length() ; i++)
    {
        if (std::isalnum(str[i]))
            return (true);
    }
    std::cerr << "[ERROR] empty value" << std::endl;
    return (false);
}

int     PhoneBook::check_valid_num(std::string str)
{
    for (int i = 0; i < (int)str.length() ; i++)
    {
        if (str[i] == '-')
            continue;
        if (!(std::isdigit(str[i])))
            return (false);
    }
    return (true);
}

void    PhoneBook::add_contact(void){

    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string number;
    std::string secret;    
    
    std::cout << "You Chosse create a new contact" << std::endl << "Enter your information as the prompt asks" << std::endl;
   
    std::cout << "Write your name" << std::endl;
    std::cin >> f_name;
    if (!(this->check_valid_string(f_name)))
        return;

    std::cout << "Write your last name" << std::endl;
    std::cin >> l_name;
    if (!(this->check_valid_string(l_name)))
        return;

    std::cout << "Write your nickname" << std::endl;
    std::cin >> n_name;
    if (!(this->check_valid_string(n_name)))
        return;
    
    std::cout << "Write your number" << std::endl;
    std::cin >> number;
    if (!(this->check_valid_string(number)))
        return;
    
    std::cout << "Write your darkest secret" << std::endl;
    std::cin >> secret;
    if (!(this->check_valid_string(secret)))
        return;

    Contact instance(f_name, l_name, n_name, number, secret);
    std::cout << instance.get_first_name() << std::endl;
    this->contacts[this->book_index] = instance;
    this->increment_index();
    std::cout << this->get_index() << std::endl;
}

void    PhoneBook::search(void)
{
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string number;
    std::string secret;    
    std::string index;
    
    std::cout << "Phone Book Contacts:" << std::endl;
    if (this->get_all_contacts() == 0)
    {
        std::cout << "No Contacts Added!" << std::endl;
        return ;
    }
    else
        std::cout << "     index| firstname|  lastname|  nickname|" << std::endl;
    for (int i = 0; i <= (this->book_index - 1); i++)
    {
        std::cout << std::setw(10) << i << "|";
        f_name = this->contacts[i].get_first_name();
        if (f_name.size() > 10){
            f_name.resize(9);
            std::cout << f_name << ".|";
        }
        else
            std::cout << std::setw(10) << f_name << "|";
        
        l_name = this->contacts[i].get_last_name();
        if (l_name.size() > 10){
            l_name.resize(9);
            std::cout << l_name << ".|";
        }
        else
            std::cout << std::setw(10) << l_name << "|";
        
        n_name = this->contacts[i].get_nickname();
        if (n_name.size() > 10){
            n_name.resize(9);
            std::cout << n_name << ".|";
        }
        else
            std::cout << std::setw(10) << n_name << "|";
        std::cout << std::endl;
    }
    std::cout << "Choose the index of the contact that you are searching for:" << std::endl;
    std::cin >> index;
    if (!(this->check_valid_num(index)))
    {
        std::cout << "index must be a number!" << std::endl;
        return ;
    }
    int num_index = std::atoi(index.c_str());
    std::cout << this->all_contacts << std::endl;
    if (num_index > 7 || num_index < 0 || num_index >= this->all_contacts)
    {
        std::cout << "index out of range" << std::endl;
        return ;
    }
    else{
        std::cout << "showing contact of num_index: " << num_index << std::endl;
        std::cout << "First Name: " << this->contacts[num_index].get_first_name() << std::endl;
        std::cout << "Last Name:" << this->contacts[num_index].get_last_name() << std::endl;
        std::cout << "Nickname: " << this->contacts[num_index].get_nickname() << std::endl;
        std::cout << "Phone number: " <<  this->contacts[num_index].get_number() << std::endl;
        std::cout << "Darkest secret: " <<  this->contacts[num_index].get_secret() << std::endl;
        return ;
    }
    
}