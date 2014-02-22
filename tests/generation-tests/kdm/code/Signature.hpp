
#ifndef EMF_CPP_KDM_CODE_SIGNATURE__HPP
#define EMF_CPP_KDM_CODE_SIGNATURE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class Signature :  public virtual ::kdm::code::Datatype
{
public:

    typedef Signature_ptr ptr_type;

    Signature();
    virtual ~Signature();

    typedef std::vector < kdm::code::ParameterUnit_ptr > parameterUnit_t;

    parameterUnit_t getParameterUnit() const;
    void addParameterUnit(kdm::code::ParameterUnit_ptr parameterUnit_);
    void addAllParameterUnit(const parameterUnit_t& parameterUnit_);


    /*PROTECTED REGION ID(kdm::code::Signature public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;

    std::vector < std::unique_ptr < kdm::code::ParameterUnit > > m_parameterUnit;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::Signature protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_SIGNATURE__HPP
