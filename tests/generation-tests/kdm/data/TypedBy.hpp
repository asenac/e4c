
#ifndef EMF_CPP_KDM_DATA_TYPEDBY__HPP
#define EMF_CPP_KDM_DATA_TYPEDBY__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::TypedBy
class TypedBy :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

	typedef TypedBy_ptr ptr_type;
	
	TypedBy();
	virtual ~TypedBy();

	typedef kdm::data::ComplexContentType_ptr to_t;
	typedef kdm::data::ContentItem_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::data::ComplexContentType_ptr m_to;
	kdm::data::ContentItem_ptr m_from;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_TYPEDBY__HPP