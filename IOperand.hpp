//
// IOperand.hpp for AVM in /home/letohi_f//Projet/aVM
// 
// Made by florian letohic
// Login   <letohi_f@epitech.net>
// 
// Started on  Tue Feb 12 17:31:54 2013 florian letohic
// Last update Tue Feb 12 18:27:59 2013 florian letohic
//

#ifndef		IOPERAND_HPP__
#define		IOPERAND_HPP__

#include	<iostream>

enum		eOperandType
  {
    Int8,
    Int16,
    Int32,
    Float,
    Double
  };

class IOperand
{
public:

  virtual std::string const & toString() const = 0;

  virtual int getPrecision() const = 0;
  virtual eOperandType getType() const = 0;

  virtual IOperand * operator+(const IOperand &rhs) const = 0;
  virtual IOperand * operator-(const IOperand &rhs) const = 0;
  virtual IOperand * operator*(const IOperand &rhs) const = 0;
  virtual IOperand * operator/(const IOperand &rhs) const = 0;
  virtual IOperand * operator%(const IOperand &rhs) const = 0;
  virtual ~IOperand() {}
};

#endif
