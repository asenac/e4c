
#include "Definition.hpp"
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/statement/AbstractStatement.hpp>

using namespace xpand3::declaration;

/*PROTECTED REGION ID(xpand3::declaration::Definition include) START*/
/*PROTECTED REGION END*/

Definition::Definition() :
    m_body()
{
    /*PROTECTED REGION ID(Definition constructor) START*/
    /*PROTECTED REGION END*/
}

Definition::~Definition()
{
    /*PROTECTED REGION ID(Definition destructor) START*/
    /*PROTECTED REGION END*/
}

Definition::body_t Definition::getBody() const
{
    return e4c::returned(m_body);
}


void Definition::addBody(xpand3::statement::AbstractStatement_ptr body_)
{
    m_body.push_back(std::unique_ptr < xpand3::statement::AbstractStatement >(body_));
}

void Definition::addAllBody(const body_t& body_)
{
    for (auto i = body_.begin(); i != body_.end(); i++)
        addBody(*i);
}



/*PROTECTED REGION ID(xpand3::declaration::Definition implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Definition::eClassImpl() const
{
    return DeclarationPackage::_instance()->getDefinition();
}

