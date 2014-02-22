
#ifndef EMF_CPP_XTEXT_ENUMRULE__HPP
#define EMF_CPP_XTEXT_ENUMRULE__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractRule.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class EnumRule :  public virtual ::xtext::AbstractRule
{
public:

    typedef EnumRule_ptr ptr_type;

    EnumRule();
    virtual ~EnumRule();




    /*PROTECTED REGION ID(xtext::EnumRule public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::EnumRule protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_ENUMRULE__HPP
