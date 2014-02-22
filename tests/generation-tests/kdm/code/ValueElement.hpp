
#ifndef EMF_CPP_KDM_CODE_VALUEELEMENT__HPP
#define EMF_CPP_KDM_CODE_VALUEELEMENT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DataElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class ValueElement :  public virtual ::kdm::code::DataElement
{
public:

    typedef ValueElement_ptr ptr_type;

    virtual ~ValueElement();




    /*PROTECTED REGION ID(kdm::code::ValueElement public) START*/
    /*PROTECTED REGION END*/

protected:
    ValueElement();

    friend class CodePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::ValueElement protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_VALUEELEMENT__HPP
