
#ifndef EMF_CPP_XTEXT_ABSTRACTRULE__HPP
#define EMF_CPP_XTEXT_ABSTRACTRULE__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class AbstractRule : ::ecore::EObject
{
public:

    typedef AbstractRule_ptr ptr_type;

    AbstractRule();
    virtual ~AbstractRule();

    typedef ::ecore::EString name_t;
    typedef xtext::TypeRef_ptr type_t;
    typedef xtext::AbstractElement_ptr alternatives_t;

    void setName(name_t _name);
    name_t getName() const;
    type_t getType() const;
    void setType(type_t type_);
    type_t releaseType();
    alternatives_t getAlternatives() const;
    void setAlternatives(alternatives_t alternatives_);
    alternatives_t releaseAlternatives();


    /*PROTECTED REGION ID(xtext::AbstractRule public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;

    name_t m_name;
    std::unique_ptr < xtext::TypeRef > m_type;
    std::unique_ptr < xtext::AbstractElement > m_alternatives;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::AbstractRule protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_ABSTRACTRULE__HPP
