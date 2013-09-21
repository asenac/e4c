
#ifndef EMF_CPP_IDLMM_ATTRIBUTEDEF__HPP
#define EMF_CPP_IDLMM_ATTRIBUTEDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/Typed.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


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
	void addGetRaises(idlmm::ExceptionDef_ptr getRaises_);
	void addAllGetRaises(const getRaises_t& getRaises_);
	
	setRaises_t getSetRaises() const;
	void addSetRaises(idlmm::ExceptionDef_ptr setRaises_);
	void addAllSetRaises(const setRaises_t& setRaises_);
	
	void setIsReadonly(isReadonly_t _isReadonly);
	isReadonly_t getIsReadonly() const;
	
		
protected:

	friend class IdlmmPackage;

	std::vector < idlmm::ExceptionDef_ptr > m_getRaises;
	std::vector < idlmm::ExceptionDef_ptr > m_setRaises;
	isReadonly_t m_isReadonly;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_ATTRIBUTEDEF__HPP
