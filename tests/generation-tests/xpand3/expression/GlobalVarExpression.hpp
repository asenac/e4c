
#ifndef EMF_CPP_XPAND3_EXPRESSION_GLOBALVAREXPRESSION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_GLOBALVAREXPRESSION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


// xpand3::expression::GlobalVarExpression
class GlobalVarExpression :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef GlobalVarExpression_ptr ptr_type;
	
	GlobalVarExpression();
	virtual ~GlobalVarExpression();

	typedef xpand3::Identifier_ptr globalVarName_t;

	
	globalVarName_t getGlobalVarName() const;


	std::unique_ptr < xpand3::Identifier > m_globalVarName;

		
protected:

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_GLOBALVAREXPRESSION__HPP
