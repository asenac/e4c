
#ifndef EMF_CPP_KDM_CODE_CODEELEMENT__HPP
#define EMF_CPP_KDM_CODE_CODEELEMENT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/CodeItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class CodeElement :  public virtual ::kdm::code::CodeItem
{
public:

    typedef CodeElement_ptr ptr_type;

    CodeElement();
    virtual ~CodeElement();




    /*PROTECTED REGION ID(kdm::code::CodeElement public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::CodeElement protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CODEELEMENT__HPP
