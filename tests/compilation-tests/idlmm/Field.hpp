
#ifndef EMF_CPP_IDLMM_FIELD__HPP
#define EMF_CPP_IDLMM_FIELD__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Typed.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class Field :  public virtual ::idlmm::Typed
{
public:

	typedef Field_ptr ptr_type;
	
	Field();
	virtual ~Field();

	typedef ::ecore::EString identifier_t;
	
	void setIdentifier(identifier_t _identifier);
	identifier_t getIdentifier() const;
	
		
protected:

	friend class IdlmmPackage;

	identifier_t m_identifier;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_FIELD__HPP
