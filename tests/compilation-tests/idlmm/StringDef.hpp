#ifndef EMF_CPP_IDLMM_STRINGDEF__HPP
#define EMF_CPP_IDLMM_STRINGDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/IDLType.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class StringDef :  public virtual ::idlmm::IDLType
{
public:

	typedef StringDef_ptr ptr_type;
	
	StringDef();
	virtual ~StringDef();

	typedef idlmm::Expression_ptr bound_t;
	
	bound_t getBound() const;
	void setBound(bound_t bound_);
	bound_t releaseBound();
	

	/*PROTECTED REGION ID(idlmm::StringDef public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class IdlmmPackage;

	std::unique_ptr < idlmm::Expression > m_bound;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::StringDef protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_STRINGDEF__HPP
