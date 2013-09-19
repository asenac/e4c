
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

	typedef boost::ptr_vector < xpand3::statement::AbstractStatement > body_t;

	
	// TODO

	
protected:
	AbstractStatementWithBody();

	body_t m_body;

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_ABSTRACTSTATEMENTWITHBODY__HPP
