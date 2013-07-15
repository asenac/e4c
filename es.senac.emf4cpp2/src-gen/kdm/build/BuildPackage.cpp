#include "BuildPackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace kdm::build;

BuildPackage::BuildPackage()
{
}

BuildPackage_ptr BuildPackage::_instance()
{
	static BuildPackage __instance;
	return &__instance;
}

e4c::tag_t BuildPackage::getTag_AbstractBuildElement()
{
	return e4c::tag< AbstractBuildElement >::get();
}
 
e4c::tag_t BuildPackage::getTag_BuildResource()
{
	return e4c::tag< BuildResource >::get();
}
 
e4c::tag_t BuildPackage::getTag_BuildDescription()
{
	return e4c::tag< BuildDescription >::get();
}
 
e4c::tag_t BuildPackage::getTag_SymbolicLink()
{
	return e4c::tag< SymbolicLink >::get();
}
 
e4c::tag_t BuildPackage::getTag_AbstractBuildRelationship()
{
	return e4c::tag< AbstractBuildRelationship >::get();
}
 
e4c::tag_t BuildPackage::getTag_LinksTo()
{
	return e4c::tag< LinksTo >::get();
}
 
e4c::tag_t BuildPackage::getTag_Consumes()
{
	return e4c::tag< Consumes >::get();
}
 
e4c::tag_t BuildPackage::getTag_BuildModel()
{
	return e4c::tag< BuildModel >::get();
}
 
e4c::tag_t BuildPackage::getTag_BuildComponent()
{
	return e4c::tag< BuildComponent >::get();
}
 
e4c::tag_t BuildPackage::getTag_Supplier()
{
	return e4c::tag< Supplier >::get();
}
 
e4c::tag_t BuildPackage::getTag_Tool()
{
	return e4c::tag< Tool >::get();
}
 
e4c::tag_t BuildPackage::getTag_BuildElement()
{
	return e4c::tag< BuildElement >::get();
}
 
e4c::tag_t BuildPackage::getTag_BuildRelationship()
{
	return e4c::tag< BuildRelationship >::get();
}
 
e4c::tag_t BuildPackage::getTag_SuppliedBy()
{
	return e4c::tag< SuppliedBy >::get();
}
 
e4c::tag_t BuildPackage::getTag_Library()
{
	return e4c::tag< Library >::get();
}
 
e4c::tag_t BuildPackage::getTag_BuildStep()
{
	return e4c::tag< BuildStep >::get();
}
 
e4c::tag_t BuildPackage::getTag_Produces()
{
	return e4c::tag< Produces >::get();
}
 
e4c::tag_t BuildPackage::getTag_SupportedBy()
{
	return e4c::tag< SupportedBy >::get();
}
 
e4c::tag_t BuildPackage::getTag_BuildProduct()
{
	return e4c::tag< BuildProduct >::get();
}
 
e4c::tag_t BuildPackage::getTag_DescribedBy()
{
	return e4c::tag< DescribedBy >::get();
}
 
e4c::tag_t BuildPackage::getTag_AbstractBuildElement__buildRelation()
{
	return e4c::tag< AbstractBuildElement__buildRelation_tag >::get();
}

e4c::tag_t BuildPackage::getTag_BuildResource__implementation()
{
	return e4c::tag< BuildResource__implementation_tag >::get();
}

e4c::tag_t BuildPackage::getTag_BuildResource__groupedBuild()
{
	return e4c::tag< BuildResource__groupedBuild_tag >::get();
}

e4c::tag_t BuildPackage::getTag_BuildResource__buildElement()
{
	return e4c::tag< BuildResource__buildElement_tag >::get();
}

e4c::tag_t BuildPackage::getTag_BuildDescription__source()
{
	return e4c::tag< BuildDescription__source_tag >::get();
}

e4c::tag_t BuildPackage::getTag_BuildDescription__text()
{
	return e4c::tag< BuildDescription__text_tag >::get();
}

e4c::tag_t BuildPackage::getTag_LinksTo__to()
{
	return e4c::tag< LinksTo__to_tag >::get();
}

e4c::tag_t BuildPackage::getTag_LinksTo__from()
{
	return e4c::tag< LinksTo__from_tag >::get();
}

e4c::tag_t BuildPackage::getTag_Consumes__to()
{
	return e4c::tag< Consumes__to_tag >::get();
}

e4c::tag_t BuildPackage::getTag_Consumes__from()
{
	return e4c::tag< Consumes__from_tag >::get();
}

e4c::tag_t BuildPackage::getTag_BuildModel__buildElement()
{
	return e4c::tag< BuildModel__buildElement_tag >::get();
}

e4c::tag_t BuildPackage::getTag_BuildRelationship__to()
{
	return e4c::tag< BuildRelationship__to_tag >::get();
}

e4c::tag_t BuildPackage::getTag_BuildRelationship__from()
{
	return e4c::tag< BuildRelationship__from_tag >::get();
}

e4c::tag_t BuildPackage::getTag_SuppliedBy__to()
{
	return e4c::tag< SuppliedBy__to_tag >::get();
}

e4c::tag_t BuildPackage::getTag_SuppliedBy__from()
{
	return e4c::tag< SuppliedBy__from_tag >::get();
}

e4c::tag_t BuildPackage::getTag_Produces__to()
{
	return e4c::tag< Produces__to_tag >::get();
}

e4c::tag_t BuildPackage::getTag_Produces__from()
{
	return e4c::tag< Produces__from_tag >::get();
}

e4c::tag_t BuildPackage::getTag_SupportedBy__to()
{
	return e4c::tag< SupportedBy__to_tag >::get();
}

e4c::tag_t BuildPackage::getTag_SupportedBy__from()
{
	return e4c::tag< SupportedBy__from_tag >::get();
}

e4c::tag_t BuildPackage::getTag_DescribedBy__to()
{
	return e4c::tag< DescribedBy__to_tag >::get();
}

e4c::tag_t BuildPackage::getTag_DescribedBy__from()
{
	return e4c::tag< DescribedBy__from_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_kdm_build()
{
	return ::kdm::build::BuildPackage::_instance();
}
