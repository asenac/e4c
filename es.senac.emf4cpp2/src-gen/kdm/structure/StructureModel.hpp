
#ifndef EMF_CPP_KDM_STRUCTURE_STRUCTUREMODEL__HPP
#define EMF_CPP_KDM_STRUCTURE_STRUCTUREMODEL__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>


namespace kdm
{
namespace structure
{


// kdm::structure::StructureModel
class StructureModel :  public virtual ::kdm::kdm::KDMModel
{
public:

	typedef StructureModel_ptr ptr_type;

	StructureModel();
	virtual ~StructureModel();

	// Typedefs
	typedef ::e4c::impl::reference< StructureModel__structureElement_tag > _structureElement_t;

	
	// Members
	_structureElement_t structureElement;

};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_STRUCTUREMODEL__HPP
