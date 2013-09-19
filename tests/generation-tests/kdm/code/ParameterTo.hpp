
#ifndef EMF_CPP_KDM_CODE_PARAMETERTO__HPP
#define EMF_CPP_KDM_CODE_PARAMETERTO__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::ParameterTo
class ParameterTo :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef ParameterTo_ptr ptr_type;
	
	ParameterTo();
	virtual ~ParameterTo();

	typedef kdm::code::CodeItem_ptr to_t;
	typedef kdm::code::AbstractCodeElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_PARAMETERTO__HPP
