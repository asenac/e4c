
#ifndef EMF_CPP_KDM_KDM_TAGDEFINITION__HPP
#define EMF_CPP_KDM_KDM_TAGDEFINITION__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/Element.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace kdm
{


// kdm::kdm::TagDefinition
class TagDefinition :  public virtual ::kdm::core::Element
{
public:

	typedef TagDefinition_ptr ptr_type;
	
	TagDefinition();
	virtual ~TagDefinition();

	typedef int tag_t;
	typedef int type_t;

	
	void setTag(tag_t _tag);
	tag_t getTag() const;
	void setType(type_t _type);
	type_t getType() const;

	
protected:

	tag_t m_tag;
	type_t m_type;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_TAGDEFINITION__HPP
