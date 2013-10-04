
#include "SourceFile.hpp"
#include <kdm/source/SourcePackage.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::SourceFile include) START*/
/*PROTECTED REGION END*/

SourceFile::SourceFile() : 
	m_language(),
    m_encoding()
{
	/*PROTECTED REGION ID(SourceFile constructor) START*/
	/*PROTECTED REGION END*/
}

SourceFile::~SourceFile()
{
	/*PROTECTED REGION ID(SourceFile destructor) START*/
	/*PROTECTED REGION END*/
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



/*PROTECTED REGION ID(kdm::source::SourceFile implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr SourceFile::eClassImpl() const
{
	return SourcePackage::_instance()->getSourceFile();
}
 
