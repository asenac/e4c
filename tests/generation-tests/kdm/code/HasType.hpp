
#ifndef EMF_CPP_KDM_CODE_HASTYPE__HPP
#define EMF_CPP_KDM_CODE_HASTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::HasType
class HasType :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef HasType_ptr ptr_type;
	
	HasType();
	virtual ~HasType();

	typedef kdm::code::Datatype_ptr to_t;
	typedef kdm::code::CodeItem_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::code::Datatype_ptr m_to;
	kdm::code::CodeItem_ptr m_from;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_HASTYPE__HPP
