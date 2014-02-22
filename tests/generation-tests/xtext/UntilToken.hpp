
#ifndef EMF_CPP_XTEXT_UNTILTOKEN__HPP
#define EMF_CPP_XTEXT_UNTILTOKEN__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractNegatedToken.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class UntilToken :  public virtual ::xtext::AbstractNegatedToken
{
public:

    typedef UntilToken_ptr ptr_type;

    UntilToken();
    virtual ~UntilToken();




    /*PROTECTED REGION ID(xtext::UntilToken public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::UntilToken protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_UNTILTOKEN__HPP
