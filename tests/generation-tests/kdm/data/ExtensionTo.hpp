
#ifndef EMF_CPP_KDM_DATA_EXTENSIONTO__HPP
#define EMF_CPP_KDM_DATA_EXTENSIONTO__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::ExtensionTo
class ExtensionTo :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

	typedef ExtensionTo_ptr ptr_type;
	
	ExtensionTo();
	virtual ~ExtensionTo();

	typedef kdm::data::ComplexContentType_ptr to_t;
	typedef kdm::data::ComplexContentType_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::data::ComplexContentType_ptr m_to;
	kdm::data::ComplexContentType_ptr m_from;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_EXTENSIONTO__HPP
