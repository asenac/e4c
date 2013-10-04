
#ifndef EMF_CPP_KDM_DATA_SIMPLECONTENTTYPE__HPP
#define EMF_CPP_KDM_DATA_SIMPLECONTENTTYPE__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ComplexContentType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class SimpleContentType :  public virtual ::kdm::data::ComplexContentType
{
public:

	typedef SimpleContentType_ptr ptr_type;
	
	SimpleContentType();
	virtual ~SimpleContentType();

	typedef std::set < kdm::data::ComplexContentType_ptr > type_t;
	typedef ::kdm::core::String kind_t;
	
	type_t getType() const;
	void addType(kdm::data::ComplexContentType_ptr type_);
	void addAllType(const type_t& type_);
	void setKind(kind_t _kind);
	kind_t getKind() const;
	

	/*PROTECTED REGION ID(kdm::data::SimpleContentType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DataPackage;

	std::set < kdm::data::ComplexContentType_ptr > m_type;
	kind_t m_kind;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::data::SimpleContentType protected) START*/
	/*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_SIMPLECONTENTTYPE__HPP
