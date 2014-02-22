
#ifndef EMF_CPP_XTEXT_KEYWORD__HPP
#define EMF_CPP_XTEXT_KEYWORD__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class Keyword :  public virtual ::xtext::AbstractElement
{
public:

    typedef Keyword_ptr ptr_type;

    Keyword();
    virtual ~Keyword();

    typedef ::ecore::EString value_t;

    void setValue(value_t _value);
    value_t getValue() const;


    /*PROTECTED REGION ID(xtext::Keyword public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;

    value_t m_value;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::Keyword protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_KEYWORD__HPP
