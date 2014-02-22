#ifndef EMF_CPP_IDLMM_TYPEDEFDEF__HPP
#define EMF_CPP_IDLMM_TYPEDEFDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/IDLType.hpp>
#include <idlmm/Contained.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class TypedefDef :  public virtual ::idlmm::IDLType,  public virtual ::idlmm::Contained
{
public:

    typedef TypedefDef_ptr ptr_type;

    virtual ~TypedefDef();




    /*PROTECTED REGION ID(idlmm::TypedefDef public) START*/
    /*PROTECTED REGION END*/

protected:
    TypedefDef();

    friend class IdlmmPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(idlmm::TypedefDef protected) START*/
    /*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_TYPEDEFDEF__HPP
