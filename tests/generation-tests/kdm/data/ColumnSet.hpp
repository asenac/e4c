
#ifndef EMF_CPP_KDM_DATA_COLUMNSET__HPP
#define EMF_CPP_KDM_DATA_COLUMNSET__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/DataContainer.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class ColumnSet :  public virtual ::kdm::data::DataContainer
{
public:

    typedef ColumnSet_ptr ptr_type;

    ColumnSet();
    virtual ~ColumnSet();

    typedef std::vector < kdm::code::ItemUnit_ptr > itemUnit_t;

    itemUnit_t getItemUnit() const;
    void addItemUnit(kdm::code::ItemUnit_ptr itemUnit_);
    void addAllItemUnit(const itemUnit_t& itemUnit_);


    /*PROTECTED REGION ID(kdm::data::ColumnSet public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;

    std::vector < std::unique_ptr < kdm::code::ItemUnit > > m_itemUnit;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::ColumnSet protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_COLUMNSET__HPP
