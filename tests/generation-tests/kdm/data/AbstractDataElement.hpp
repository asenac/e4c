
#ifndef EMF_CPP_KDM_DATA_ABSTRACTDATAELEMENT__HPP
#define EMF_CPP_KDM_DATA_ABSTRACTDATAELEMENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/core/KDMEntity.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::AbstractDataElement
class AbstractDataElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractDataElement_ptr ptr_type;
	
	virtual ~AbstractDataElement();

	typedef std::set < kdm::source::SourceRef_ptr > source_t;
	typedef std::set < kdm::data::AbstractDataRelationship_ptr > dataRelation_t;
	typedef std::vector < kdm::action::ActionElement_ptr > abstraction_t;

	
	source_t getSource() const;
	dataRelation_t getDataRelation() const;
	abstraction_t getAbstraction() const;


	std::set < std::unique_ptr < kdm::source::SourceRef > > m_source;
	std::set < std::unique_ptr < kdm::data::AbstractDataRelationship > > m_dataRelation;
	std::vector < std::unique_ptr < kdm::action::ActionElement > > m_abstraction;

		
protected:
	AbstractDataElement();

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_ABSTRACTDATAELEMENT__HPP
