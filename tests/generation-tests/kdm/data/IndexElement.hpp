
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


class IndexElement :  public virtual ::kdm::data::DataResource
{
public:

	typedef IndexElement_ptr ptr_type;
	
	IndexElement();
	virtual ~IndexElement();

	typedef std::set < kdm::code::ItemUnit_ptr > implementation_t;
	
	implementation_t getImplementation() const;
	void addImplementation(kdm::code::ItemUnit_ptr implementation_);
	void addAllImplementation(const implementation_t& implementation_);
	

	/*PROTECTED REGION ID(kdm::data::IndexElement public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DataPackage;

	std::set < kdm::code::ItemUnit_ptr > m_implementation;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::data::IndexElement protected) START*/
	/*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_INDEXELEMENT__HPP
