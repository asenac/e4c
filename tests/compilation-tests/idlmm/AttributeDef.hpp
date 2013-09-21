
#ifndef EMF_CPP_IDLMM_ATTRIBUTEDEF__HPP
#define EMF_CPP_IDLMM_ATTRIBUTEDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/Typed.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::AttributeDef
class AttributeDef :  public virtual ::idlmm::Contained,  public virtual ::idlmm::Typed
{
public:

	typedef AttributeDef_ptr ptr_type;
	
	AttributeDef();
	virtual ~AttributeDef();

	typedef std::vector < idlmm::ExceptionDef_ptr > getRaises_t;
	typedef std::vector < idlmm::ExceptionDef_ptr > setRaises_t;
	typedef ::ecore::EBoolean isReadonly_t;

	
	getRaises_t getGetRaises() const;
	
	setRaises_t getSetRaises() const;
	
	void setIsReadonly(isReadonly_t _isReadonly);
	isReadonly_t getIsReadonly() const;

		
protected:

	std::vector < idlmm::ExceptionDef_ptr > m_getRaises;
	std::vector < idlmm::ExceptionDef_ptr > m_setRaises;
	isReadonly_t m_isReadonly;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_ATTRIBUTEDEF__HPP
