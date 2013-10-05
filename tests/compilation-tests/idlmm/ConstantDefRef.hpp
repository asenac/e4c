#ifndef EMF_CPP_IDLMM_CONSTANTDEFREF__HPP
#define EMF_CPP_IDLMM_CONSTANTDEFREF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/LiteralExpression.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class ConstantDefRef :  public virtual ::idlmm::LiteralExpression
{
public:

	typedef ConstantDefRef_ptr ptr_type;
	
	ConstantDefRef();
	virtual ~ConstantDefRef();

	typedef idlmm::Constant_ptr constant_t;
	
	constant_t getConstant() const;
	void setConstant(constant_t constant_);
	

	/*PROTECTED REGION ID(idlmm::ConstantDefRef public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class IdlmmPackage;

	idlmm::Constant_ptr m_constant;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::ConstantDefRef protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_CONSTANTDEFREF__HPP
