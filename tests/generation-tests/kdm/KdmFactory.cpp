#include "KdmFactory.hpp"
#include "KdmPackage.hpp"
#include "include.hpp"

using namespace kdm;

KdmFactory::KdmFactory()
{
	m_ePackage = KdmPackage::_instance();
}

const KdmFactory_ptr KdmFactory::_instance()
{
	static KdmFactory __instance;
	return &__instance;
}

