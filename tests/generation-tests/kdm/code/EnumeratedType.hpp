
#ifndef EMF_CPP_KDM_CODE_ENUMERATEDTYPE__HPP
#define EMF_CPP_KDM_CODE_ENUMERATEDTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class EnumeratedType :  public virtual ::kdm::code::Datatype
{
public:

    typedef EnumeratedType_ptr ptr_type;

    EnumeratedType();
    virtual ~EnumeratedType();

    typedef std::vector < kdm::code::Value_ptr > value_t;

    value_t getValue() const;
    void addValue(kdm::code::Value_ptr value_);
    void addAllValue(const value_t& value_);


    /*PROTECTED REGION ID(kdm::code::EnumeratedType public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;

    std::vector < std::unique_ptr < kdm::code::Value > > m_value;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::EnumeratedType protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_ENUMERATEDTYPE__HPP
