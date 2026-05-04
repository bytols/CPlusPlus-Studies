/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 16:43:47 by erocha-l          #+#    #+#             */
/*   Updated: 2026/05/03 21:47:35 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_H_
#define __SHRUBBERYCREATIONFORM_H_

#include "AForm.hpp"
#include <fstream>
#include <sstream>
#include <string>

class ShrubberyCreationForm : public AForm {

private:
  std::string _target;

public:
  ShrubberyCreationForm(const std::string &target);
  ShrubberyCreationForm(const ShrubberyCreationForm &copy);
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
  ~ShrubberyCreationForm();
  void execute(Bureaucrat const &executor) const;
};

#endif