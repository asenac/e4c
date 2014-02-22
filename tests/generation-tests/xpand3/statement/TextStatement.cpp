
#include "TextStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>

using namespace xpand3::statement;

/*PROTECTED REGION ID(xpand3::statement::TextStatement include) START*/
/*PROTECTED REGION END*/

TextStatement::TextStatement() :
    m_value(),
    m_deleteLine()
{
    /*PROTECTED REGION ID(TextStatement constructor) START*/
    /*PROTECTED REGION END*/
}

TextStatement::~TextStatement()
{
    /*PROTECTED REGION ID(TextStatement destructor) START*/
    /*PROTECTED REGION END*/
}

void TextStatement::setValue(value_t _value)
{
    m_value = _value;;
}

TextStatement::value_t TextStatement::getValue() const
{
    return m_value;
}

void TextStatement::setDeleteLine(deleteLine_t _deleteLine)
{
    m_deleteLine = _deleteLine;;
}

TextStatement::deleteLine_t TextStatement::getDeleteLine() const
{
    return m_deleteLine;
}



/*PROTECTED REGION ID(xpand3::statement::TextStatement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TextStatement::eClassImpl() const
{
    return StatementPackage::_instance()->getTextStatement();
}

