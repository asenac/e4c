
#include "DefinitionAspect.hpp"
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/statement/AbstractStatement.hpp>

using namespace xpand3::declaration;

/*PROTECTED REGION ID(xpand3::declaration::DefinitionAspect include) START*/
/*PROTECTED REGION END*/

DefinitionAspect::DefinitionAspect() :
    m_body()
{
    /*PROTECTED REGION ID(DefinitionAspect constructor) START*/
    /*PROTECTED REGION END*/
}

DefinitionAspect::~DefinitionAspect()
{
    /*PROTECTED REGION ID(DefinitionAspect destructor) START*/
    /*PROTECTED REGION END*/
}

DefinitionAspect::body_t DefinitionAspect::getBody() const
{
    return e4c::returned(m_body);
}


void DefinitionAspect::addBody(xpand3::statement::AbstractStatement_ptr body_)
{
    m_body.push_back(std::unique_ptr < xpand3::statement::AbstractStatement >(body_));
}

void DefinitionAspect::addAllBody(const body_t& body_)
{
    for (auto i = body_.begin(); i != body_.end(); i++)
        addBody(*i);
}



/*PROTECTED REGION ID(xpand3::declaration::DefinitionAspect implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DefinitionAspect::eClassImpl() const
{
    return DeclarationPackage::_instance()->getDefinitionAspect();
}

