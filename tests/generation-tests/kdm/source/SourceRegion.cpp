
#include "SourceRegion.hpp"
#include <kdm/source/SourcePackage.hpp>
#include <kdm/source/SourceFile.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::SourceRegion include) START*/
/*PROTECTED REGION END*/

SourceRegion::SourceRegion() :
    m_file(),
    m_startLine(),
    m_startPosition(),
    m_endLine(),
    m_endPosition(),
    m_language(),
    m_path()
{
    /*PROTECTED REGION ID(SourceRegion constructor) START*/
    /*PROTECTED REGION END*/
}

SourceRegion::~SourceRegion()
{
    /*PROTECTED REGION ID(SourceRegion destructor) START*/
    /*PROTECTED REGION END*/
}

SourceRegion::file_t SourceRegion::getFile() const
{
    return e4c::returned(m_file);
}

void SourceRegion::setFile(file_t file_)
{
    if (m_file == file_)
        return;
    m_file = file_;
}

void SourceRegion::setStartLine(startLine_t _startLine)
{
    m_startLine = _startLine;;
}

SourceRegion::startLine_t SourceRegion::getStartLine() const
{
    return m_startLine;
}

void SourceRegion::setStartPosition(startPosition_t _startPosition)
{
    m_startPosition = _startPosition;;
}

SourceRegion::startPosition_t SourceRegion::getStartPosition() const
{
    return m_startPosition;
}

void SourceRegion::setEndLine(endLine_t _endLine)
{
    m_endLine = _endLine;;
}

SourceRegion::endLine_t SourceRegion::getEndLine() const
{
    return m_endLine;
}

void SourceRegion::setEndPosition(endPosition_t _endPosition)
{
    m_endPosition = _endPosition;;
}

SourceRegion::endPosition_t SourceRegion::getEndPosition() const
{
    return m_endPosition;
}

void SourceRegion::setLanguage(language_t _language)
{
    m_language = _language;;
}

SourceRegion::language_t SourceRegion::getLanguage() const
{
    return m_language;
}

void SourceRegion::setPath(path_t _path)
{
    m_path = _path;;
}

SourceRegion::path_t SourceRegion::getPath() const
{
    return m_path;
}



/*PROTECTED REGION ID(kdm::source::SourceRegion implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr SourceRegion::eClassImpl() const
{
    return SourcePackage::_instance()->getSourceRegion();
}

