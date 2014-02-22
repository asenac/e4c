
#ifndef EMF_CPP_KDM_CODE_DATATYPE__HPP
#define EMF_CPP_KDM_CODE_DATATYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/CodeItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class Datatype :  public virtual ::kdm::code::CodeItem
{
public:

    typedef Datatype_ptr ptr_type;

    virtual ~Datatype();




    /*PROTECTED REGION ID(kdm::code::Datatype public) START*/
    /*PROTECTED REGION END*/

protected:
    Datatype();

    friend class CodePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::Datatype protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_DATATYPE__HPP
