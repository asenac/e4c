
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


// xpand3::statement::AbstractStatement
class AbstractStatement :  public virtual ::xpand3::SyntaxElement
{
public:

	typedef AbstractStatement_ptr ptr_type;
	
	virtual ~AbstractStatement();

	
	
	

	
		
protected:
	AbstractStatement();

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_ABSTRACTSTATEMENT__HPP
