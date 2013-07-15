
#ifndef EMF_CPP_KDM_CODE_CODERELATIONSHIP__HPP
#define EMF_CPP_KDM_CODE_CODERELATIONSHIP__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>


namespace kdm
{
namespace code
{


// kdm::code::CodeRelationship
class CodeRelationship :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef CodeRelationship_ptr ptr_type;

	CodeRelationship();
	virtual ~CodeRelationship();

	// Typedefs
	typedef ::e4c::impl::reference< CodeRelationship__to_tag > _to_t;
	typedef ::e4c::impl::reference< CodeRelationship__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CODERELATIONSHIP__HPP