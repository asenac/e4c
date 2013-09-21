
#include "Type.hpp"
#include <emof/Package.hpp>

using namespace emof;

Type::Type() : 
	m_package()
{
}

Type::~Type()
{
}

Type::package_t Type::getPackage() const
{
	return e4c::returned(m_package);
}



