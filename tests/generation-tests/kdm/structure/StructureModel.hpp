
#ifndef EMF_CPP_KDM_STRUCTURE_STRUCTUREMODEL__HPP
#define EMF_CPP_KDM_STRUCTURE_STRUCTUREMODEL__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>

#include <e4c/mapping.hpp>

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

	typedef boost::ptr_set < kdm::structure::AbstractStructureElement > structureElement_t;

	
	// TODO

	
protected:

	structureElement_t m_structureElement;

};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_STRUCTUREMODEL__HPP
