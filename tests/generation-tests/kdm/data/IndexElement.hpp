
#ifndef EMF_CPP_KDM_DATA_INDEXELEMENT__HPP
#define EMF_CPP_KDM_DATA_INDEXELEMENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/DataResource.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::IndexElement
class IndexElement :  public virtual ::kdm::data::DataResource
{
public:

	typedef IndexElement_ptr ptr_type;
	
	IndexElement();
	virtual ~IndexElement();

	typedef std::set < kdm::code::ItemUnit_ptr > implementation_t;

	
	implementation_t getImplementation() const;


	std::set < kdm::code::ItemUnit_ptr > m_implementation;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_INDEXELEMENT__HPP
