//
// Stack.cpp for aVm in /home/letohi_f//git
// 
// Made by florian letohic
// Login   <letohi_f@epitech.net>
// 
// Started on  Mon Feb 18 18:02:05 2013 florian letohic
// Last update Fri Feb 22 05:45:00 2013 florian letohic
//

#include	"Stack.hpp"

Stack::Stack()
{
  this->func["pop"] = &Stack::pop;
  this->func["dump"] = &Stack::dump;
  this->func["add"] = &Stack::add;
  this->func["sub"] = &Stack::sub;
  this->func["mul"] = &Stack::mul;
  this->func["div"] = &Stack::div;
  this->func["mod"] = &Stack::mod;
  this->func["print"] = &Stack::print;
  
  this->type_func["int8"] = &Stack::create_int8;
  this->type_func["int16"] = &Stack::create_int16;
  this->type_func["int32"] = &Stack::create_int32;
  this->type_func["double"] = &Stack::create_double;
  this->type_func["float"] = &Stack::create_float;
}

Stack::~Stack()
{
  
}

IOperand      *Stack::create_int8(std::string const & value)
{
  return (new Operand<int8_t>(value, Int8));
}

IOperand      *Stack::create_int16(std::string const & value)
{
  return (new Operand<int16_t>(value, Int16));
}

IOperand      *Stack::create_int32(std::string const & value)
{
  return (new Operand<int32_t>(value, Int32));
}

IOperand      *Stack::create_float(std::string const & value)
{
  return (new Operand<float>(value, Float));
}

IOperand      *Stack::create_double(std::string const & value)
{
  return (new Operand<double>(value, Double));
}

void	Stack::push(IOperand *value)
{
  this->values.push_front(value);
}

void  Stack::pop()
{
  this->values.pop_front(); 
}
void  Stack::dump()
{
  std::deque<IOperand *>::iterator	it;

  for (it = this->values.begin(); it < this->values.end(); ++it)
    {
      std::cout << this->values.front()->toString() << std::endl;
    }
}
void  Stack::assert(IOperand *Val)
{
  if (!(this->values.front()->toString() == Val->toString() &&
	this->values.front()->getType() == Val->getType()))
    {
      return ;
    } 
}

void  Stack::add()
{
  IOperand	*first;
  IOperand	*second;
  IOperand	*ret;

  first = this->values.front();
  this->values.pop_front();
  second = this->values.front();
  this->values.pop_front();
  ret = first + second;
  this->values.push_front(ret);
}

void  Stack::sub()
{
  IOperand	*first;
  IOperand	*second;
  IOperand	*ret;

  first = this->values.front();
  this->values.pop_front();
  second = this->values.front();
  this->values.pop_front();
  ret = first - second;
  this->values.push_front(ret);
}

void  Stack::mul()
{
  IOperand	*first;
  IOperand	*second;
  IOperand	*ret;

  first = this->values.front();
  this->values.pop_front();
  second = this->values.front();
  this->values.pop_front();
  ret = first * second;
  this->values.push_front(ret);
}

void  Stack::div()
{
  IOperand	*first;
  IOperand	*second;
  IOperand	*ret;

  first = this->values.front();
  this->values.pop_front();
  second = this->values.front();
  this->values.pop_front();
  ret = first / second;
  this->values.push_front(ret);
}

void  Stack::mod()
{
  IOperand	*first;
  IOperand	*second;
  IOperand	*ret;

  first = this->values.front();
  this->values.pop_front();
  second = this->values.front();
  this->values.pop_front();
  ret = first % second;
  this->values.push_front(ret);
}

void	Stack::print()
{
  char 	c;

  if (this->getValues()->getType() == Int8)
    {
      c = static_cast<char>(this->getValues()->toString());
      std::cout << c << std::endl;
    }
}
