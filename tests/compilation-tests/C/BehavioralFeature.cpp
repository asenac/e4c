
#include "BehavioralFeature.hpp"
#include <C/CPackage.hpp>
#include <C/CParameter.hpp>

using namespace C;

/*PROTECTED REGION ID(C::BehavioralFeature include) START*/
/*PROTECTED REGION END*/

BehavioralFeature::BehavioralFeature() :
    m_parameters()
{
    /*PROTECTED REGION ID(BehavioralFeature constructor) START*/
    /*PROTECTED REGION END*/
}

BehavioralFeature::~BehavioralFeature()
{
    /*PROTECTED REGION ID(BehavioralFeature destructor) START*/
    /*PROTECTED REGION END*/
}

BehavioralFeature::parameters_t BehavioralFeature::getParameters() const
{
    return e4c::returned(m_parameters);
}


void BehavioralFeature::addParameters(C::CParameter_ptr parameters_)
{
    parameters_->setBehavioralFeature(this);
    m_parameters.insert(std::unique_ptr < C::CParameter >(parameters_));
}

void BehavioralFeature::addAllParameters(const parameters_t& parameters_)
{
    for (auto i = parameters_.begin(); i != parameters_.end(); i++)
        addParameters(*i);
}



/*PROTECTED REGION ID(C::BehavioralFeature implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr BehavioralFeature::eClassImpl() const
{
    return CPackage::_instance()->getBehavioralFeature();
}

