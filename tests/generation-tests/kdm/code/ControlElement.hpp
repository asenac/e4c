
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
	typedef std::set < kdm::action::EntryFlow_ptr > entryFlow_t;
	typedef std::vector < kdm::code::AbstractCodeElement_ptr > codeElement_t;

	
	type_t getType() const;
	entryFlow_t getEntryFlow() const;
	codeElement_t getCodeElement() const;


	kdm::code::Datatype_ptr m_type;
	std::set < std::unique_ptr < kdm::action::EntryFlow > > m_entryFlow;
	std::vector < std::unique_ptr < kdm::code::AbstractCodeElement > > m_codeElement;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CONTROLELEMENT__HPP
