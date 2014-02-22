
#ifndef EMF_CPP_KDM_CODE_LANGUAGEUNIT__HPP
#define EMF_CPP_KDM_CODE_LANGUAGEUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Module.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class LanguageUnit :  public virtual ::kdm::code::Module
{
public:

    typedef LanguageUnit_ptr ptr_type;

    LanguageUnit();
    virtual ~LanguageUnit();




    /*PROTECTED REGION ID(kdm::code::LanguageUnit public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::LanguageUnit protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_LANGUAGEUNIT__HPP
