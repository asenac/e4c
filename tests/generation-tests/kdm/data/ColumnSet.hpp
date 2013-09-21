
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


// kdm::data::ColumnSet
class ColumnSet :  public virtual ::kdm::data::DataContainer
{
public:

	typedef ColumnSet_ptr ptr_type;
	
	ColumnSet();
	virtual ~ColumnSet();

	typedef std::vector < kdm::code::ItemUnit_ptr > itemUnit_t;

	
	itemUnit_t getItemUnit() const;


	std::vector < std::unique_ptr < kdm::code::ItemUnit > > m_itemUnit;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_COLUMNSET__HPP
