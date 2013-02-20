//
// Stack.cpp for aVm in /home/letohi_f//git
// 
// Made by florian letohic
// Login   <letohi_f@epitech.net>
// 
// Started on  Mon Feb 18 18:02:05 2013 florian letohic
// Last update Wed Feb 20 16:16:07 2013 florian letohic
//

#include	"Stack.hpp"

Stack::Stack()
{
  this->func["pop"] = &pop;
  this->func["dump"] = &dump;
  this->func["add"] = &add;
  this->func["sub"] = &sub;
  this->func["mul"] = &mul;
  this->func["div"] = &div;
  this->func["mod"] = &mod;
  this->func["print"] = &print;
  
  this->type_func["int8"] = &creat_int8;
  this->type_func["int16"] = &creat_int16;
  this->type_func["int32"] = &creat_int32;
  this->type_func["double"] = &creat_double;
  this->type_func["float"] = &creat_float;
}

Stack::~Stack()
{
  
}

Ioperand      *create_int8(std::string const & value)
{
  return (new Operand(value, INT8));
}

Ioperand      *create_int16(std::string const & value)
{
  return (new Operand(value, INT16));
}

Ioperand      *create_int32(std::string const & value)
{
  return (new Operand(value, INT32));
}

Ioperand      *create_float(std::string const & value)
{
  return (new Operand(value, FLOAT));
}

Ioperand      *create_double(std::string const & value)
{
  return (new Operand(value, DOUBLE));
}
