//
// Stack.hpp for aVM in /home/letohi_f//git
// 
// Made by florian letohic
// Login   <letohi_f@epitech.net>
// 
// Started on  Sun Feb 17 23:37:34 2013 florian letohic
// Last update Fri Feb 22 05:41:37 2013 florian letohic
//

#ifndef		STACK_HPP__
#define		STACK_HPP__

#include	<map>
#include	<deque>
#include	<stdint.h>
#include	"Operand.hpp"

class		Stack
{
private:
  std::deque<IOperand *>	values;
  std::map<std::string, void (Stack::*)()>	func;
  std::map<std::string, IOperand (Stack::*)(std::string const&)>	type_func;

public:
  Stack();
  ~Stack();
  IOperand	*getValues() const;

private:
  void	push(IOperand *);
  void	pop();
  void	dump();
  void	assert(IOperand *);
  void	add();
  void	sub();
  void	mul();
  void	div();
  void	mod();
  void	print();

  IOperand	*create_int8(std::string const & value);
  IOperand	*create_int16(std::string const & value);
  IOperand	*create_int32(std::string const & value);
  IOperand	*create_float(std::string const & value);
  IOperand	*create_double(std::string const & value);
};

#endif
