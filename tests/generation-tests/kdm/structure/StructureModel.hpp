
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


class StructureModel :  public virtual ::kdm::kdm::KDMModel
{
public:

	typedef StructureModel_ptr ptr_type;
	
	StructureModel();
	virtual ~StructureModel();

	typedef std::set < kdm::structure::AbstractStructureElement_ptr > structureElement_t;
	
	structureElement_t getStructureElement() const;
	void addStructureElement(kdm::structure::AbstractStructureElement_ptr structureElement_);
	void addAllStructureElement(const structureElement_t& structureElement_);
	

	/*PROTECTED REGION ID(kdm::structure::StructureModel public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class StructurePackage;

	std::set < std::unique_ptr < kdm::structure::AbstractStructureElement > > m_structureElement;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::structure::StructureModel protected) START*/
	/*PROTECTED REGION END*/
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_STRUCTUREMODEL__HPP
