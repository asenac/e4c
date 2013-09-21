
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


// kdm::code::CompositeType
class CompositeType :  public virtual ::kdm::code::Datatype
{
public:

	typedef CompositeType_ptr ptr_type;
	
	CompositeType();
	virtual ~CompositeType();

	typedef std::vector < kdm::code::ItemUnit_ptr > itemUnit_t;

	
	itemUnit_t getItemUnit() const;


	std::vector < std::unique_ptr < kdm::code::ItemUnit > > m_itemUnit;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_COMPOSITETYPE__HPP
