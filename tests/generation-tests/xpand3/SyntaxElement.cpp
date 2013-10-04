
#include "SyntaxElement.hpp"
#include <xpand3/Xpand3Package.hpp>

using namespace xpand3;

/*PROTECTED REGION ID(xpand3::SyntaxElement include) START*/
/*PROTECTED REGION END*/

SyntaxElement::SyntaxElement() : 
	m_line(),
    m_start(),
    m_end(),
    m_fileName()
{
	/*PROTECTED REGION ID(SyntaxElement constructor) START*/
	/*PROTECTED REGION END*/
}

SyntaxElement::~SyntaxElement()
{
	/*PROTECTED REGION ID(SyntaxElement destructor) START*/
	/*PROTECTED REGION END*/
}

void SyntaxElement::setLine(line_t _line)
{
	m_line = _line;;
}

SyntaxElement::line_t SyntaxElement::getLine() const
{
	return m_line;
}

void SyntaxElement::setStart(start_t _start)
{
	m_start = _start;;
}

SyntaxElement::start_t SyntaxElement::getStart() const
{
	return m_start;
}

void SyntaxElement::setEnd(end_t _end)
{
	m_end = _end;;
}

SyntaxElement::end_t SyntaxElement::getEnd() const
{
	return m_end;
}

void SyntaxElement::setFileName(fileName_t _fileName)
{
	m_fileName = _fileName;;
}

SyntaxElement::fileName_t SyntaxElement::getFileName() const
{
	return m_fileName;
}



/*PROTECTED REGION ID(xpand3::SyntaxElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr SyntaxElement::eClassImpl() const
{
	return Xpand3Package::_instance()->getSyntaxElement();
}
 
