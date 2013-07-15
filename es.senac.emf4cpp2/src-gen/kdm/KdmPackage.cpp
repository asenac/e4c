#include "KdmPackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace kdm;

KdmPackage::KdmPackage()
{
}

KdmPackage_ptr KdmPackage::_instance()
{
	static KdmPackage __instance;
	return &__instance;
}

extern "C" ::ecore::EPackage_ptr e4c_kdm()
{
	return ::kdm::KdmPackage::_instance();
}
