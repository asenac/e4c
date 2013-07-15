
#ifndef EMF_CPP_KDM_ACTION_ACTIONELEMENT__HPP
#define EMF_CPP_KDM_ACTION_ACTIONELEMENT__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/code/AbstractCodeElement.hpp>


namespace kdm
{
namespace action
{


// kdm::action::ActionElement
class ActionElement :  public virtual ::kdm::code::AbstractCodeElement
{
public:

	typedef ActionElement_ptr ptr_type;

	ActionElement();
	virtual ~ActionElement();

	// Typedefs
	typedef ::e4c::impl::attribute< ActionElement__kind_tag > _kind_t;
	typedef ::e4c::impl::reference< ActionElement__codeElement_tag > _codeElement_t;
	typedef ::e4c::impl::reference< ActionElement__actionRelation_tag > _actionRelation_t;

	
	// Members
	_kind_t kind;
	_codeElement_t codeElement;
	_actionRelation_t actionRelation;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_ACTIONELEMENT__HPP
