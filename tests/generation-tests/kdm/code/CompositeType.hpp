
#ifndef EMF_CPP_KDM_CODE_COMPOSITETYPE__HPP
#define EMF_CPP_KDM_CODE_COMPOSITETYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class CompositeType :  public virtual ::kdm::code::Datatype
{
public:

    typedef CompositeType_ptr ptr_type;

    CompositeType();
    virtual ~CompositeType();

    typedef std::vector < kdm::code::ItemUnit_ptr > itemUnit_t;

    itemUnit_t getItemUnit() const;
    void addItemUnit(kdm::code::ItemUnit_ptr itemUnit_);
    void addAllItemUnit(const itemUnit_t& itemUnit_);


    /*PROTECTED REGION ID(kdm::code::CompositeType public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;

    std::vector < std::unique_ptr < kdm::code::ItemUnit > > m_itemUnit;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::CompositeType protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_COMPOSITETYPE__HPP
