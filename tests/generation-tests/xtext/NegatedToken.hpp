
#ifndef EMF_CPP_XTEXT_NEGATEDTOKEN__HPP
#define EMF_CPP_XTEXT_NEGATEDTOKEN__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractNegatedToken.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class NegatedToken :  public virtual ::xtext::AbstractNegatedToken
{
public:

    typedef NegatedToken_ptr ptr_type;

    NegatedToken();
    virtual ~NegatedToken();




    /*PROTECTED REGION ID(xtext::NegatedToken public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::NegatedToken protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_NEGATEDTOKEN__HPP
