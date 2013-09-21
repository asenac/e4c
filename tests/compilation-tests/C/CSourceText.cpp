
#include "CSourceText.hpp"

using namespace C;

CSourceText::CSourceText() : 
	m_source(),
    m_fileName()
{
}

CSourceText::~CSourceText()
{
}

void CSourceText::setSource(source_t _source)
{
	m_source = _source;;
}

CSourceText::source_t CSourceText::getSource() const
{
	return m_source;
}

void CSourceText::setFileName(fileName_t _fileName)
{
	m_fileName = _fileName;;
}

CSourceText::fileName_t CSourceText::getFileName() const
{
	return m_fileName;
}



