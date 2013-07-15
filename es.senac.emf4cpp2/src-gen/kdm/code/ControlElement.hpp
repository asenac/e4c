
#ifndef EMF_CPP_KDM_CODE_CONTROLELEMENT__HPP
#define EMF_CPP_KDM_CODE_CONTROLELEMENT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/ComputationalObject.hpp>


namespace kdm
{
namespace code
{


// kdm::code::ControlElement
class ControlElement :  public virtual ::kdm::code::ComputationalObject
{
public:

	typedef ControlElement_ptr ptr_type;

	ControlElement();
	virtual ~ControlElement();

	// Typedefs
	typedef ::e4c::impl::reference< ControlElement__type_tag > _type_t;
	typedef ::e4c::impl::reference< ControlElement__entryFlow_tag > _entryFlow_t;
	typedef ::e4c::impl::reference< ControlElement__codeElement_tag > _codeElement_t;

	
	// Members
	_type_t type;
	_entryFlow_t entryFlow;
	_codeElement_t codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CONTROLELEMENT__HPP
