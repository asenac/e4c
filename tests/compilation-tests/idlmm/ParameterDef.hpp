
#ifndef EMF_CPP_IDLMM_PARAMETERDEF__HPP
#define EMF_CPP_IDLMM_PARAMETERDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Typed.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::ParameterDef
class ParameterDef :  public virtual ::idlmm::Typed
{
public:

	typedef ParameterDef_ptr ptr_type;
	
	ParameterDef();
	virtual ~ParameterDef();

	typedef ::ecore::EString identifier_t;
	typedef ::idlmm::ParameterMode direction_t;

	
	void setIdentifier(identifier_t _identifier);
	identifier_t getIdentifier() const;
	void setDirection(direction_t _direction);
	direction_t getDirection() const;

		
protected:

	identifier_t m_identifier;
	direction_t m_direction;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_PARAMETERDEF__HPP
