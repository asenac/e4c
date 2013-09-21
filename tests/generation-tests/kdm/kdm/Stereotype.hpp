
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


// kdm::kdm::Stereotype
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
	void setName(name_t _name);
	name_t getName() const;
	void setType(type_t _type);
	type_t getType() const;


	std::set < std::unique_ptr < kdm::kdm::TagDefinition > > m_tag;
	name_t m_name;
	type_t m_type;

		
protected:

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_STEREOTYPE__HPP
