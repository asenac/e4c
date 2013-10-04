
#ifndef EMF_CPP_KDM_DATA_REFERENCETO__HPP
#define EMF_CPP_KDM_DATA_REFERENCETO__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class ReferenceTo :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

	typedef ReferenceTo_ptr ptr_type;
	
	ReferenceTo();
	virtual ~ReferenceTo();

	typedef kdm::data::ContentItem_ptr to_t;
	typedef kdm::data::ContentItem_ptr from_t;
	
	to_t getTo() const;
	void setTo(to_t to_);
	from_t getFrom() const;
	void setFrom(from_t from_);
	

	/*PROTECTED REGION ID(kdm::data::ReferenceTo public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DataPackage;

	kdm::data::ContentItem_ptr m_to;
	kdm::data::ContentItem_ptr m_from;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::data::ReferenceTo protected) START*/
	/*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_REFERENCETO__HPP
