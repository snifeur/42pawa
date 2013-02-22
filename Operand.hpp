//
// Operand.hpp for aVM in /home/letohi_f//Projet/aVM
// 
// Made by florian letohic
// Login   <letohi_f@epitech.net>
// 
// Started on  Tue Feb 12 18:02:30 2013 florian letohic
// Last update Fri Feb 22 05:18:43 2013 florian letohic
//

#ifndef		OPERAND_HPP__
#define		OPERAND_HPP__

#include	"IOperand.hpp"
#include	<sstream>

template<typename T>
class		Operand : public IOperand
{
private:
  T		Value;
  std::string	Str;
  eOperandType	Type;
public:
  Operand(std::string val, eOperandType type);
  int getPrecision() const;
  eOperandType getType() const;
  std::string	toString() const;

  IOperand * operator+(const IOperand &rhs);
  IOperand * operator-(const IOperand &rhs);
  IOperand * operator*(const IOperand &rhs);
  IOperand * operator/(const IOperand &rhs);
  IOperand * operator%(const IOperand &rhs);
  ~Operand() {}
};

template<typename T>
Operand<T>::Operand(std::string val, eOperandType type) :
  Value(val), Type(type)
{
  std::stringstream	o;

  o.str(val);
  o >> this->value;
};

template<typename T>
int	Operand<T>::getPrecision() const
{
  return (static_cast<int>(this->type));
}

template<typename T>
eOperandType	Operand<T>::getType() const
{
  return (this->Type);
}

template<typename T>
std::string	Operand<T>::toString() const
{
  return (this->Str);
}

template<typename T>
IOperand	*Operand<T>::operator+(const IOperand &rhs)
{
  this->value += rhs->value;
  this->Str = this->value;
}

template<typename T>
IOperand	*Operand<T>::operator-(const IOperand &rhs)
{
  this->value -= rhs->value;
  this->Str = this->value;
}

template<typename T>
IOperand	*Operand<T>::operator*(const IOperand &rhs)
{
  this->value *= rhs->value;
  this->Str = this->value;
}

template<typename T>
IOperand	*Operand<T>::operator/(const IOperand &rhs)
{
  this->value /= rhs->value;
  this->Str = this->value;
}

template<typename T>
IOperand	*Operand<T>::operator%(const IOperand &rhs)
{
  this->value /= rhs->value;
  this->Str = this->value;
}

#endif
