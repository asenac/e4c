
#ifndef EMF_CPP_IDLMM_NAMEDELEMENT__HPP
#define EMF_CPP_IDLMM_NAMEDELEMENT__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::NamedElement
class NamedElement :  public virtual ::idlmm::ModelElement
{
public:

	typedef NamedElement_ptr ptr_type;
	
	virtual ~NamedElement();

	typedef ::ecore::EString identifier_t;

	
	void setIdentifier(identifier_t _identifier);
	identifier_t getIdentifier() const;

		
protected:
	NamedElement();

	identifier_t m_identifier;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_NAMEDELEMENT__HPP
