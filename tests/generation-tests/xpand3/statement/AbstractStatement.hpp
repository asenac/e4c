
#ifndef EMF_CPP_XPAND3_STATEMENT_ABSTRACTSTATEMENT__HPP
#define EMF_CPP_XPAND3_STATEMENT_ABSTRACTSTATEMENT__HPP

#include <xpand3/statement/fwd.hpp>
#include <xpand3/statement/meta.hpp>
#include <xpand3/SyntaxElement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace statement
{


class AbstractStatement :  public virtual ::xpand3::SyntaxElement
{
public:

	typedef AbstractStatement_ptr ptr_type;
	
	virtual ~AbstractStatement();

	
	

	/*PROTECTED REGION ID(xpand3::statement::AbstractStatement public) START*/
	/*PROTECTED REGION END*/
		
protected:
	AbstractStatement();

	friend class StatementPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::statement::AbstractStatement protected) START*/
	/*PROTECTED REGION END*/
};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_ABSTRACTSTATEMENT__HPP
