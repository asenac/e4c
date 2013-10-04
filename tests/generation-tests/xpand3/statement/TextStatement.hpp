
#ifndef EMF_CPP_XPAND3_STATEMENT_TEXTSTATEMENT__HPP
#define EMF_CPP_XPAND3_STATEMENT_TEXTSTATEMENT__HPP

#include <xpand3/statement/fwd.hpp>
#include <xpand3/statement/meta.hpp>
#include <xpand3/statement/AbstractStatement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace statement
{


class TextStatement :  public virtual ::xpand3::statement::AbstractStatement
{
public:

	typedef TextStatement_ptr ptr_type;
	
	TextStatement();
	virtual ~TextStatement();

	typedef ::ecore::EString value_t;
	typedef ::ecore::EBoolean deleteLine_t;
	
	void setValue(value_t _value);
	value_t getValue() const;
	void setDeleteLine(deleteLine_t _deleteLine);
	deleteLine_t getDeleteLine() const;
	

	/*PROTECTED REGION ID(xpand3::statement::TextStatement public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class StatementPackage;

	value_t m_value;
	deleteLine_t m_deleteLine;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::statement::TextStatement protected) START*/
	/*PROTECTED REGION END*/
};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_TEXTSTATEMENT__HPP
