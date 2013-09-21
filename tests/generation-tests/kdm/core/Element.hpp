
#ifndef EMF_CPP_KDM_CORE_ELEMENT__HPP
#define EMF_CPP_KDM_CORE_ELEMENT__HPP

#include <kdm/core/fwd.hpp>
#include <kdm/core/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace core
{


// kdm::core::Element
class Element
{
public:

	typedef Element_ptr ptr_type;
	
	virtual ~Element();

	typedef std::set < kdm::kdm::Attribute_ptr > attribute_t;
	typedef std::set < kdm::kdm::Annotation_ptr > annotation_t;

	
	attribute_t getAttribute() const;
	annotation_t getAnnotation() const;


	std::set < std::unique_ptr < kdm::kdm::Attribute > > m_attribute;
	std::set < std::unique_ptr < kdm::kdm::Annotation > > m_annotation;

		
protected:
	Element();

};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_ELEMENT__HPP
