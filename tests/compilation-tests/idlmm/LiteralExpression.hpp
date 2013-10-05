#ifndef EMF_CPP_IDLMM_LITERALEXPRESSION__HPP
#define EMF_CPP_IDLMM_LITERALEXPRESSION__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Expression.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class LiteralExpression :  public virtual ::idlmm::Expression
{
public:

	typedef LiteralExpression_ptr ptr_type;
	
	virtual ~LiteralExpression();

	
	

	/*PROTECTED REGION ID(idlmm::LiteralExpression public) START*/
	/*PROTECTED REGION END*/
		
protected:
	LiteralExpression();

	friend class IdlmmPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::LiteralExpression protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_LITERALEXPRESSION__HPP
