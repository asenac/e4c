
#ifndef EMF_CPP_KDM_META_HPP
#define EMF_CPP_KDM_META_HPP

#include <e4c/definition.hpp>
#include <kdm/fwd.hpp>


namespace kdm
{




} // kdm


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::kdm::KdmPackage >
{
	typedef boost::mpl::list<  > eClasses;
	typedef boost::mpl::list< ::kdm::action::ActionPackage,
	                          ::kdm::build::BuildPackage,
	                          ::kdm::code::CodePackage,
	                          ::kdm::conceptual::ConceptualPackage,
	                          ::kdm::core::CorePackage,
	                          ::kdm::data::DataPackage,
	                          ::kdm::event::EventPackage,
	                          ::kdm::source::SourcePackage,
	                          ::kdm::platform::PlatformPackage,
	                          ::kdm::structure::StructurePackage,
	                          ::kdm::kdm::KdmPackage,
	                          ::kdm::ui::UiPackage > eSubpackages;
};


} // namespace definition
} // namespace e4c

#endif // EMF_CPP_KDM_Meta_HPP
