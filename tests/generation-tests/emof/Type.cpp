
#include "Type.hpp"
#include <emof/EmofPackage.hpp>
#include <emof/Package.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::Type include) START*/
/*PROTECTED REGION END*/

Type::Type() :
    m_package()
{
    /*PROTECTED REGION ID(Type constructor) START*/
    /*PROTECTED REGION END*/
}

Type::~Type()
{
    /*PROTECTED REGION ID(Type destructor) START*/
    /*PROTECTED REGION END*/
}

Type::package_t Type::getPackage() const
{
    return e4c::returned(m_package);
}

void Type::setPackage(package_t package_)
{
    m_package = package_;
}



/*PROTECTED REGION ID(emof::Type implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Type::eClassImpl() const
{
    return EmofPackage::_instance()->getType();
}

