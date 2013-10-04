
#include "AbstractStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>

using namespace xpand3::statement;

/*PROTECTED REGION ID(xpand3::statement::AbstractStatement include) START*/
/*PROTECTED REGION END*/

AbstractStatement::AbstractStatement()
{
	/*PROTECTED REGION ID(AbstractStatement constructor) START*/
	/*PROTECTED REGION END*/
}

AbstractStatement::~AbstractStatement()
{
	/*PROTECTED REGION ID(AbstractStatement destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xpand3::statement::AbstractStatement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractStatement::eClassImpl() const
{
	return StatementPackage::_instance()->getAbstractStatement();
}
 
