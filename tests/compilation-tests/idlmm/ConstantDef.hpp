
#ifndef EMF_CPP_IDLMM_CONSTANTDEF__HPP
#define EMF_CPP_IDLMM_CONSTANTDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/Typed.hpp>
#include <idlmm/Constant.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class ConstantDef :  public virtual ::idlmm::Contained,  public virtual ::idlmm::Typed,  public virtual ::idlmm::Constant
{
public:

	typedef ConstantDef_ptr ptr_type;
	
	ConstantDef();
	virtual ~ConstantDef();

	typedef idlmm::Expression_ptr constValue_t;
	
	constValue_t getConstValue() const;
	void setConstValue(constValue_t constValue_);
	constValue_t releaseConstValue();
	
		
protected:

	friend class IdlmmPackage;

	std::unique_ptr < idlmm::Expression > m_constValue;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_CONSTANTDEF__HPP
