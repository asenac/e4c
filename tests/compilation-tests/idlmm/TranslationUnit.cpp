#include "TranslationUnit.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/Include.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::TranslationUnit include) START*/
/*PROTECTED REGION END*/

TranslationUnit::TranslationUnit() :
    m_contains(),
    m_identifier(),
    m_includes()
{
    /*PROTECTED REGION ID(TranslationUnit constructor) START*/
    /*PROTECTED REGION END*/
}

TranslationUnit::~TranslationUnit()
{
    /*PROTECTED REGION ID(TranslationUnit destructor) START*/
    /*PROTECTED REGION END*/
}

TranslationUnit::contains_t TranslationUnit::getContains() const
{
    return e4c::returned(m_contains);
}

void TranslationUnit::addContains(idlmm::Contained_ptr contains_)
{
    assert(contains_);
    m_contains.push_back(std::unique_ptr < idlmm::Contained >(contains_));
}

void TranslationUnit::addAllContains(const contains_t& contains_)
{
    for (auto i = contains_.begin(); i != contains_.end(); i++)
        addContains(*i);
}

void TranslationUnit::removeContains(idlmm::Contained_ptr contains_)
{
    assert(contains_);
    e4c::remove(m_contains, contains_);
}

void TranslationUnit::clearContains()
{
    m_contains.clear();
}

void TranslationUnit::setIdentifier(identifier_t _identifier)
{
    m_identifier = _identifier;;
}

TranslationUnit::identifier_t TranslationUnit::getIdentifier() const
{
    return m_identifier;
}

TranslationUnit::includes_t TranslationUnit::getIncludes() const
{
    return e4c::returned(m_includes);
}

void TranslationUnit::addIncludes(idlmm::Include_ptr includes_)
{
    assert(includes_);
    m_includes.push_back(std::unique_ptr < idlmm::Include >(includes_));
}

void TranslationUnit::addAllIncludes(const includes_t& includes_)
{
    for (auto i = includes_.begin(); i != includes_.end(); i++)
        addIncludes(*i);
}

void TranslationUnit::removeIncludes(idlmm::Include_ptr includes_)
{
    assert(includes_);
    e4c::remove(m_includes, includes_);
}

void TranslationUnit::clearIncludes()
{
    m_includes.clear();
}



/*PROTECTED REGION ID(idlmm::TranslationUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TranslationUnit::eClassImpl() const
{
    return IdlmmPackage::_instance()->getTranslationUnit();
}

