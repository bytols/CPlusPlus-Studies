/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 16:15:49 by erocha-l          #+#    #+#             */
/*   Updated: 2026/05/03 21:26:26 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AFORMN_H_
#define __AFORMN_H_

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class AForm {

private:
  const std::string _name;
  bool _isSigned;
  const int _grade_to_sign;
  const int _grade_to_execute;

public:
  AForm(std::string name, int grade_to_sign, int grade_to_execute);
  AForm(const AForm &copy);
  AForm &operator=(const AForm &other);
  virtual ~AForm();
  virtual std::string getName() const;
  virtual bool getIsSigned() const;
  virtual int getGradeToSign() const;
  virtual int getGradeToExecute() const;
  virtual void beSigned(const Bureaucrat &bureaucrat);
  virtual void execute(Bureaucrat const &executor) const = 0;
  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
  class NotSignedException : public std::exception {
    public:
        virtual const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &out, const AForm &ref);

#endif
