//
// Operand.hpp for aVM in /home/letohi_f//Projet/aVM
// 
// Made by florian letohic
// Login   <letohi_f@epitech.net>
// 
// Started on  Tue Feb 12 18:02:30 2013 florian letohic
// Last update Wed Feb 13 06:35:15 2013 loic caminondo
//

#ifndef		OPERAND_HPP__
#define		OPERAND_HPP__

#include	"IOperand.hpp"

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

  IOperand * operator+(const IOperand &rhs);
  IOperand * operator-(const IOperand &rhs);
  IOperand * operator*(const IOperand &rhs);
  IOperand * operator/(const IOperand &rhs);
  IOperand * operator%(const IOperand &rhs);
  ~IOperand() {}
};

Operand::Operand(std::string val, eOperandType type) :
  Value(val), Type(type)
{
  std::stringstream	o;

  o.str(val);
  o >> this->value;
};

int	Operand::getPrecision() const
{
  // return (this->);
}

eOperandType	Operand::getType() const
{
  return (this->Type);
}

IOperand	*Operand::operator+(const IOperand &rhs)
{

}

IOperand	*Operand::operator-(const IOperand &rhs)
{

}

IOperand	*Operand::operator*(const IOperand &rhs)
{

}

IOperand	*Operand::operator/(const IOperand &rhs)
{

}

IOperand	*Operand::operator%(const IOperand &rhs)
{

}
#endif
