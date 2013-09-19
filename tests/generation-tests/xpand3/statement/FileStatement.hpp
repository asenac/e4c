
#ifndef EMF_CPP_XPAND3_STATEMENT_FILESTATEMENT__HPP
#define EMF_CPP_XPAND3_STATEMENT_FILESTATEMENT__HPP

#include <xpand3/statement/fwd.hpp>
#include <xpand3/statement/meta.hpp>
#include <xpand3/statement/AbstractStatementWithBody.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace statement
{


// xpand3::statement::FileStatement
class FileStatement :  public virtual ::xpand3::statement::AbstractStatementWithBody
{
public:

	typedef FileStatement_ptr ptr_type;
	
	FileStatement();
	virtual ~FileStatement();

	typedef std::unique_ptr < xpand3::expression::AbstractExpression > fileNameExpression_t;
	typedef std::unique_ptr < xpand3::Identifier > outletNameIdentifier_t;
	typedef int once_t;

	
	// TODO
	// TODO
	void setOnce(once_t _once);
	once_t getOnce() const;

	
protected:

	fileNameExpression_t m_fileNameExpression;
	outletNameIdentifier_t m_outletNameIdentifier;
	once_t m_once;

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_FILESTATEMENT__HPP
