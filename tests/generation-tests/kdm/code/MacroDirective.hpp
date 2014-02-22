
#ifndef EMF_CPP_KDM_CODE_MACRODIRECTIVE__HPP
#define EMF_CPP_KDM_CODE_MACRODIRECTIVE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PreprocessorDirective.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class MacroDirective :  public virtual ::kdm::code::PreprocessorDirective
{
public:

    typedef MacroDirective_ptr ptr_type;

    MacroDirective();
    virtual ~MacroDirective();




    /*PROTECTED REGION ID(kdm::code::MacroDirective public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::MacroDirective protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_MACRODIRECTIVE__HPP
