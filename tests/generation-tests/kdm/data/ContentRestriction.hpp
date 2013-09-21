
#ifndef EMF_CPP_KDM_DATA_CONTENTRESTRICTION__HPP
#define EMF_CPP_KDM_DATA_CONTENTRESTRICTION__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractContentElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::ContentRestriction
class ContentRestriction :  public virtual ::kdm::data::AbstractContentElement
{
public:

	typedef ContentRestriction_ptr ptr_type;
	
	ContentRestriction();
	virtual ~ContentRestriction();

	typedef ::kdm::core::String kind_t;
	typedef ::kdm::core::String value_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	void setValue(value_t _value);
	value_t getValue() const;


	kind_t m_kind;
	value_t m_value;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_CONTENTRESTRICTION__HPP
