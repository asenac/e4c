
#ifndef EMF_CPP_KDM_DATA_DATAMODEL__HPP
#define EMF_CPP_KDM_DATA_DATAMODEL__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class DataModel :  public virtual ::kdm::kdm::KDMModel
{
public:

	typedef DataModel_ptr ptr_type;
	
	DataModel();
	virtual ~DataModel();

	typedef std::set < kdm::data::AbstractDataElement_ptr > dataElement_t;
	
	dataElement_t getDataElement() const;
	void addDataElement(kdm::data::AbstractDataElement_ptr dataElement_);
	void addAllDataElement(const dataElement_t& dataElement_);
	

	/*PROTECTED REGION ID(kdm::data::DataModel public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DataPackage;

	std::set < std::unique_ptr < kdm::data::AbstractDataElement > > m_dataElement;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::data::DataModel protected) START*/
	/*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATAMODEL__HPP
