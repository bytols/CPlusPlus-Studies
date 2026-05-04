/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 21:36:37 by erocha-l          #+#    #+#             */
/*   Updated: 2026/05/03 21:47:48 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_H_
#define __ROBOTOMYREQUESTFORM_H_

#include "AForm.hpp"
#include <fstream>
#include <sstream>
#include <string>

class RobotomyRequestForm : public AForm {

private:
  std::string _target;

public:
  RobotomyRequestForm(const std::string &target);
  RobotomyRequestForm(const RobotomyRequestForm &copy);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
  ~RobotomyRequestForm();
  void execute(Bureaucrat const &executor) const;
};

#endif