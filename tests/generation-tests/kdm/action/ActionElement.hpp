
#ifndef EMF_CPP_KDM_ACTION_ACTIONELEMENT__HPP
#define EMF_CPP_KDM_ACTION_ACTIONELEMENT__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef int kind_t;
	typedef boost::ptr_set < kdm::code::AbstractCodeElement > codeElement_t;
	typedef boost::ptr_vector < kdm::action::AbstractActionRelationship > actionRelation_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	// TODO
	// TODO

	
protected:

	kind_t m_kind;
	codeElement_t m_codeElement;
	actionRelation_t m_actionRelation;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_ACTIONELEMENT__HPP
