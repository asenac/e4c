#ifndef EMF_CPP_IDLMM_WSTRINGDEF__HPP
#define EMF_CPP_IDLMM_WSTRINGDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/IDLType.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class WstringDef :  public virtual ::idlmm::IDLType
{
public:

    typedef WstringDef_ptr ptr_type;

    WstringDef();
    virtual ~WstringDef();

    typedef idlmm::Expression_ptr bound_t;

    bound_t getBound() const;
    void setBound(bound_t bound_);
    bound_t releaseBound();


    /*PROTECTED REGION ID(idlmm::WstringDef public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class IdlmmPackage;

    std::unique_ptr < idlmm::Expression > m_bound;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(idlmm::WstringDef protected) START*/
    /*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_WSTRINGDEF__HPP
