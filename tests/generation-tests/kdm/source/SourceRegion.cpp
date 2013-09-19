
#include "SourceRegion.hpp"
#include <kdm/source/SourceFile.hpp>

using namespace kdm::source;

SourceRegion::SourceRegion() : 
	m_file(),
    m_startLine(),
    m_startPosition(),
    m_endLine(),
    m_endPosition(),
    m_language(),
    m_path()
{
}

SourceRegion::~SourceRegion()
{
}

void SourceRegion::setStartLine(startLine_t _startLine)
{
	m_startLine = _startLine;;
}

startLine_t SourceRegion::getStartLine() const
{
	return m_startLine;
}

void SourceRegion::setStartPosition(startPosition_t _startPosition)
{
	m_startPosition = _startPosition;;
}

startPosition_t SourceRegion::getStartPosition() const
{
	return m_startPosition;
}

void SourceRegion::setEndLine(endLine_t _endLine)
{
	m_endLine = _endLine;;
}

endLine_t SourceRegion::getEndLine() const
{
	return m_endLine;
}

void SourceRegion::setEndPosition(endPosition_t _endPosition)
{
	m_endPosition = _endPosition;;
}

endPosition_t SourceRegion::getEndPosition() const
{
	return m_endPosition;
}

void SourceRegion::setLanguage(language_t _language)
{
	m_language = _language;;
}

language_t SourceRegion::getLanguage() const
{
	return m_language;
}

void SourceRegion::setPath(path_t _path)
{
	m_path = _path;;
}

path_t SourceRegion::getPath() const
{
	return m_path;
}



