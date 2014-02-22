
#ifndef EMF_CPP_KDM_CODE_INCLUDEDIRECTIVE__HPP
#define EMF_CPP_KDM_CODE_INCLUDEDIRECTIVE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PreprocessorDirective.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class IncludeDirective :  public virtual ::kdm::code::PreprocessorDirective
{
public:

    typedef IncludeDirective_ptr ptr_type;

    IncludeDirective();
    virtual ~IncludeDirective();




    /*PROTECTED REGION ID(kdm::code::IncludeDirective public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::IncludeDirective protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_INCLUDEDIRECTIVE__HPP
