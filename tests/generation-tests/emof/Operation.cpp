
#include "Operation.hpp"
#include <emof/EmofPackage.hpp>
#include <emof/Class.hpp>
#include <emof/Parameter.hpp>
#include <emof/Type.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::Operation include) START*/
/*PROTECTED REGION END*/

Operation::Operation() :
    m_class(),
    m_ownedParameter(),
    m_raisedException()
{
    /*PROTECTED REGION ID(Operation constructor) START*/
    /*PROTECTED REGION END*/
}

Operation::~Operation()
{
    /*PROTECTED REGION ID(Operation destructor) START*/
    /*PROTECTED REGION END*/
}

Operation::class_t Operation::getClass() const
{
    return e4c::returned(m_class);
}

void Operation::setClass(class_t class_)
{
    m_class = class_;
}

Operation::ownedParameter_t Operation::getOwnedParameter() const
{
    return e4c::returned(m_ownedParameter);
}


void Operation::addOwnedParameter(emof::Parameter_ptr ownedParameter_)
{
    ownedParameter_->setOperation(this);
    m_ownedParameter.insert(std::unique_ptr < emof::Parameter >(ownedParameter_));
}

void Operation::addAllOwnedParameter(const ownedParameter_t& ownedParameter_)
{
    for (auto i = ownedParameter_.begin(); i != ownedParameter_.end(); i++)
        addOwnedParameter(*i);
}

Operation::raisedException_t Operation::getRaisedException() const
{
    return e4c::returned(m_raisedException);
}

void Operation::addRaisedException(emof::Type_ptr raisedException_)
{
    if (e4c::contains(m_raisedException, raisedException_))
        return;
    m_raisedException.insert(raisedException_);
}

void Operation::addAllRaisedException(const raisedException_t& raisedException_)
{
    for (auto i = raisedException_.begin(); i != raisedException_.end(); i++)
        addRaisedException(*i);
}



/*PROTECTED REGION ID(emof::Operation implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Operation::eClassImpl() const
{
    return EmofPackage::_instance()->getOperation();
}

