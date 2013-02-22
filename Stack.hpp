//
// Stack.hpp for aVM in /home/letohi_f//git
// 
// Made by florian letohic
// Login   <letohi_f@epitech.net>
// 
// Started on  Sun Feb 17 23:37:34 2013 florian letohic
// Last update Fri Feb 22 01:35:11 2013 florian letohic
//

#ifndef		STACK_HPP__
#define		STACK_HPP__

#include	<map>
#include	<stdint>
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

private:
  void	push(Ioperand *);
  void	pop();
  void	dump();
  void	asser(IOperand *);
  void	add();
  void	sub();
  void	mul();
  void	div();
  void	mod();
  void	print();

  Ioperand	*create_int8(std::string const & value);
  Ioperand	*create_int16(std::string const & value);
  Ioperand	*create_int32(std::string const & value);
  Ioperand	*create_float(std::string const & value);
  Ioperand	*create_double(std::string const & value);
};

#endif
