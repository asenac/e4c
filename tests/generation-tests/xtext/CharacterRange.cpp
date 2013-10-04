
#include "CharacterRange.hpp"
#include <xtext/XtextPackage.hpp>
#include <xtext/Keyword.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::CharacterRange include) START*/
/*PROTECTED REGION END*/

CharacterRange::CharacterRange() : 
	m_left(),
    m_right()
{
	/*PROTECTED REGION ID(CharacterRange constructor) START*/
	/*PROTECTED REGION END*/
}

CharacterRange::~CharacterRange()
{
	/*PROTECTED REGION ID(CharacterRange destructor) START*/
	/*PROTECTED REGION END*/
}

CharacterRange::left_t CharacterRange::getLeft() const
{
	return e4c::returned(m_left);
}


void CharacterRange::setLeft(left_t left_)
{
	m_left.reset(left_);
}

CharacterRange::left_t CharacterRange::releaseLeft()
{
	return m_left.release();
}

CharacterRange::right_t CharacterRange::getRight() const
{
	return e4c::returned(m_right);
}


void CharacterRange::setRight(right_t right_)
{
	m_right.reset(right_);
}

CharacterRange::right_t CharacterRange::releaseRight()
{
	return m_right.release();
}



/*PROTECTED REGION ID(xtext::CharacterRange implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CharacterRange::eClassImpl() const
{
	return XtextPackage::_instance()->getCharacterRange();
}
 
