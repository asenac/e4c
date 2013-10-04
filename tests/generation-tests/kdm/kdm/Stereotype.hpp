
#ifndef EMF_CPP_KDM_KDM_STEREOTYPE__HPP
#define EMF_CPP_KDM_KDM_STEREOTYPE__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/Element.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace kdm
{


class Stereotype :  public virtual ::kdm::core::Element
{
public:

	typedef Stereotype_ptr ptr_type;
	
	Stereotype();
	virtual ~Stereotype();

	typedef std::set < kdm::kdm::TagDefinition_ptr > tag_t;
	typedef ::kdm::core::String name_t;
	typedef ::kdm::core::String type_t;
	
	tag_t getTag() const;
	void addTag(kdm::kdm::TagDefinition_ptr tag_);
	void addAllTag(const tag_t& tag_);
	void setName(name_t _name);
	name_t getName() const;
	void setType(type_t _type);
	type_t getType() const;
	

	/*PROTECTED REGION ID(kdm::kdm::Stereotype public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class KdmPackage;

	std::set < std::unique_ptr < kdm::kdm::TagDefinition > > m_tag;
	name_t m_name;
	type_t m_type;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::kdm::Stereotype protected) START*/
	/*PROTECTED REGION END*/
};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_STEREOTYPE__HPP
