
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


// kdm::data::ReferenceTo
class ReferenceTo :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

	typedef ReferenceTo_ptr ptr_type;
	
	ReferenceTo();
	virtual ~ReferenceTo();

	typedef kdm::data::ContentItem_ptr to_t;
	typedef kdm::data::ContentItem_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::data::ContentItem_ptr m_to;
	kdm::data::ContentItem_ptr m_from;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_REFERENCETO__HPP
