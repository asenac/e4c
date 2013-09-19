
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

	typedef boost::ptr_vector < kdm::code::ItemUnit > itemUnit_t;

	
	// TODO

	
protected:

	itemUnit_t m_itemUnit;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_COMPOSITETYPE__HPP
