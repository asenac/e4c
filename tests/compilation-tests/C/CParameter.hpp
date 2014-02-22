
#ifndef EMF_CPP_C_CPARAMETER__HPP
#define EMF_CPP_C_CPARAMETER__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CTypedElement.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CParameter :  public virtual ::C::CTypedElement
{
public:

    typedef CParameter_ptr ptr_type;

    CParameter();
    virtual ~CParameter();

    typedef C::BehavioralFeature_ptr behavioralFeature_t;

    behavioralFeature_t getBehavioralFeature() const;


    /*PROTECTED REGION ID(C::CParameter public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CPackage;

    C::BehavioralFeature_ptr m_behavioralFeature;


    friend class ::C::BehavioralFeature;
    void setBehavioralFeature(behavioralFeature_t behavioralFeature_);


    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(C::CParameter protected) START*/
    /*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CPARAMETER__HPP
