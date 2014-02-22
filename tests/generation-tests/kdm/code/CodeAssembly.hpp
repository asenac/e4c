
#ifndef EMF_CPP_KDM_CODE_CODEASSEMBLY__HPP
#define EMF_CPP_KDM_CODE_CODEASSEMBLY__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Module.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class CodeAssembly :  public virtual ::kdm::code::Module
{
public:

    typedef CodeAssembly_ptr ptr_type;

    CodeAssembly();
    virtual ~CodeAssembly();




    /*PROTECTED REGION ID(kdm::code::CodeAssembly public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::CodeAssembly protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CODEASSEMBLY__HPP
