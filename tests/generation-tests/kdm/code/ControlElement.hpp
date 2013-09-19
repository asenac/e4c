
#ifndef EMF_CPP_KDM_CODE_CONTROLELEMENT__HPP
#define EMF_CPP_KDM_CODE_CONTROLELEMENT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/ComputationalObject.hpp>

#include <e4c/mapping.hpp>

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

	typedef kdm::code::Datatype_ptr type_t;
	typedef boost::ptr_set < kdm::action::EntryFlow > entryFlow_t;
	typedef boost::ptr_vector < kdm::code::AbstractCodeElement > codeElement_t;

	
	// TODO
	// TODO
	// TODO

	
protected:

	type_t m_type;
	entryFlow_t m_entryFlow;
	codeElement_t m_codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CONTROLELEMENT__HPP
