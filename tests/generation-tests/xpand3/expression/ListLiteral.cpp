
#include "ListLiteral.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::ListLiteral include) START*/
/*PROTECTED REGION END*/

ListLiteral::ListLiteral() :
    m_elements()
{
    /*PROTECTED REGION ID(ListLiteral constructor) START*/
    /*PROTECTED REGION END*/
}

ListLiteral::~ListLiteral()
{
    /*PROTECTED REGION ID(ListLiteral destructor) START*/
    /*PROTECTED REGION END*/
}

ListLiteral::elements_t ListLiteral::getElements() const
{
    return e4c::returned(m_elements);
}


void ListLiteral::addElements(xpand3::expression::AbstractExpression_ptr elements_)
{
    m_elements.push_back(std::unique_ptr < xpand3::expression::AbstractExpression >(elements_));
}

void ListLiteral::addAllElements(const elements_t& elements_)
{
    for (auto i = elements_.begin(); i != elements_.end(); i++)
        addElements(*i);
}



/*PROTECTED REGION ID(xpand3::expression::ListLiteral implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ListLiteral::eClassImpl() const
{
    return ExpressionPackage::_instance()->getListLiteral();
}

