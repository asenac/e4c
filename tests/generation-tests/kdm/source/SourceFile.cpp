
#include "SourceFile.hpp"

using namespace kdm::source;

SourceFile::SourceFile() : 
	m_language(),
    m_encoding()
{
}

SourceFile::~SourceFile()
{
}

void SourceFile::setLanguage(language_t _language)
{
	m_language = _language;;
}

SourceFile::language_t SourceFile::getLanguage() const
{
	return m_language;
}

void SourceFile::setEncoding(encoding_t _encoding)
{
	m_encoding = _encoding;;
}

SourceFile::encoding_t SourceFile::getEncoding() const
{
	return m_encoding;
}



