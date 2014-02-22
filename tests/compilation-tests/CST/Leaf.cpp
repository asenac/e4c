
#include "Leaf.hpp"
#include <CST/CSTPackage.hpp>

using namespace CST;

/*PROTECTED REGION ID(CST::Leaf include) START*/
/*PROTECTED REGION END*/

Leaf::Leaf() :
    m_value(),
    m_pos(),
    m_line()
{
    /*PROTECTED REGION ID(Leaf constructor) START*/
    /*PROTECTED REGION END*/
}

Leaf::~Leaf()
{
    /*PROTECTED REGION ID(Leaf destructor) START*/
    /*PROTECTED REGION END*/
}

void Leaf::setValue(value_t _value)
{
    m_value = _value;;
}

Leaf::value_t Leaf::getValue() const
{
    return m_value;
}

void Leaf::setPos(pos_t _pos)
{
    m_pos = _pos;;
}

Leaf::pos_t Leaf::getPos() const
{
    return m_pos;
}

void Leaf::setLine(line_t _line)
{
    m_line = _line;;
}

Leaf::line_t Leaf::getLine() const
{
    return m_line;
}



/*PROTECTED REGION ID(CST::Leaf implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Leaf::eClassImpl() const
{
    return CSTPackage::_instance()->getLeaf();
}

