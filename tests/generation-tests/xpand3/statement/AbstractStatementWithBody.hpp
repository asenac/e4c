
#ifndef EMF_CPP_XPAND3_STATEMENT_ABSTRACTSTATEMENTWITHBODY__HPP
#define EMF_CPP_XPAND3_STATEMENT_ABSTRACTSTATEMENTWITHBODY__HPP

#include <xpand3/statement/fwd.hpp>
#include <xpand3/statement/meta.hpp>
#include <xpand3/statement/AbstractStatement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace statement
{


// xpand3::statement::AbstractStatementWithBody
class AbstractStatementWithBody :  public virtual ::xpand3::statement::AbstractStatement
{
public:

	typedef AbstractStatementWithBody_ptr ptr_type;
	
	virtual ~AbstractStatementWithBody();

	typedef std::vector < xpand3::statement::AbstractStatement_ptr > body_t;

	
	body_t getBody() const;


	std::vector < std::unique_ptr < xpand3::statement::AbstractStatement > > m_body;

		
protected:
	AbstractStatementWithBody();

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_ABSTRACTSTATEMENTWITHBODY__HPP
