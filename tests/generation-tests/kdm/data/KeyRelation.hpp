
#ifndef EMF_CPP_KDM_DATA_KEYRELATION__HPP
#define EMF_CPP_KDM_DATA_KEYRELATION__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class KeyRelation :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

	typedef KeyRelation_ptr ptr_type;
	
	KeyRelation();
	virtual ~KeyRelation();

	typedef kdm::data::UniqueKey_ptr to_t;
	typedef kdm::data::ReferenceKey_ptr from_t;
	
	to_t getTo() const;
	void setTo(to_t to_);
	from_t getFrom() const;
	void setFrom(from_t from_);
	

	/*PROTECTED REGION ID(kdm::data::KeyRelation public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DataPackage;

	kdm::data::UniqueKey_ptr m_to;
	kdm::data::ReferenceKey_ptr m_from;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::data::KeyRelation protected) START*/
	/*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_KEYRELATION__HPP
