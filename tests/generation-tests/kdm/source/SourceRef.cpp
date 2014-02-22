
#include "SourceRef.hpp"
#include <kdm/source/SourcePackage.hpp>
#include <kdm/source/SourceRegion.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::SourceRef include) START*/
/*PROTECTED REGION END*/

SourceRef::SourceRef() :
    m_region(),
    m_language(),
    m_snippet()
{
    /*PROTECTED REGION ID(SourceRef constructor) START*/
    /*PROTECTED REGION END*/
}

SourceRef::~SourceRef()
{
    /*PROTECTED REGION ID(SourceRef destructor) START*/
    /*PROTECTED REGION END*/
}

SourceRef::region_t SourceRef::getRegion() const
{
    return e4c::returned(m_region);
}


void SourceRef::addRegion(kdm::source::SourceRegion_ptr region_)
{
    m_region.insert(std::unique_ptr < kdm::source::SourceRegion >(region_));
}

void SourceRef::addAllRegion(const region_t& region_)
{
    for (auto i = region_.begin(); i != region_.end(); i++)
        addRegion(*i);
}

void SourceRef::setLanguage(language_t _language)
{
    m_language = _language;;
}

SourceRef::language_t SourceRef::getLanguage() const
{
    return m_language;
}

void SourceRef::setSnippet(snippet_t _snippet)
{
    m_snippet = _snippet;;
}

SourceRef::snippet_t SourceRef::getSnippet() const
{
    return m_snippet;
}



/*PROTECTED REGION ID(kdm::source::SourceRef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr SourceRef::eClassImpl() const
{
    return SourcePackage::_instance()->getSourceRef();
}

