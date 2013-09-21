
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

	typedef xpand3::expression::AbstractExpression_ptr fileNameExpression_t;
	typedef xpand3::Identifier_ptr outletNameIdentifier_t;
	typedef ::ecore::EBoolean once_t;

	
	fileNameExpression_t getFileNameExpression() const;
	outletNameIdentifier_t getOutletNameIdentifier() const;
	void setOnce(once_t _once);
	once_t getOnce() const;


	std::unique_ptr < xpand3::expression::AbstractExpression > m_fileNameExpression;
	std::unique_ptr < xpand3::Identifier > m_outletNameIdentifier;
	once_t m_once;

		
protected:

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_FILESTATEMENT__HPP
