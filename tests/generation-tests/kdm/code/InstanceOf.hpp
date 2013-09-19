
#ifndef EMF_CPP_KDM_CODE_INSTANCEOF__HPP
#define EMF_CPP_KDM_CODE_INSTANCEOF__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::InstanceOf
class InstanceOf :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef InstanceOf_ptr ptr_type;
	
	InstanceOf();
	virtual ~InstanceOf();

	typedef kdm::code::TemplateUnit_ptr to_t;
	typedef kdm::code::AbstractCodeElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_INSTANCEOF__HPP
