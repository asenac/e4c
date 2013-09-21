
#include "CharacterRange.hpp"
#include <xtext/Keyword.hpp>

using namespace xtext;

CharacterRange::CharacterRange() : 
	m_left(),
    m_right()
{
}

CharacterRange::~CharacterRange()
{
}

CharacterRange::left_t CharacterRange::getLeft() const
{
	return e4c::returned(m_left);
}

CharacterRange::right_t CharacterRange::getRight() const
{
	return e4c::returned(m_right);
}



