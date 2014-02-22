
#ifndef EMF_CPP_XTEXT_UNORDEREDGROUP__HPP
#define EMF_CPP_XTEXT_UNORDEREDGROUP__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/CompoundElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class UnorderedGroup :  public virtual ::xtext::CompoundElement
{
public:

    typedef UnorderedGroup_ptr ptr_type;

    UnorderedGroup();
    virtual ~UnorderedGroup();




    /*PROTECTED REGION ID(xtext::UnorderedGroup public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::UnorderedGroup protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_UNORDEREDGROUP__HPP
