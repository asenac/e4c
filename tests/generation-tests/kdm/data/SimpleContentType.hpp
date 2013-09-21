
#ifndef EMF_CPP_KDM_DATA_SIMPLECONTENTTYPE__HPP
#define EMF_CPP_KDM_DATA_SIMPLECONTENTTYPE__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ComplexContentType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::SimpleContentType
class SimpleContentType :  public virtual ::kdm::data::ComplexContentType
{
public:

	typedef SimpleContentType_ptr ptr_type;
	
	SimpleContentType();
	virtual ~SimpleContentType();

	typedef std::set < kdm::data::ComplexContentType_ptr > type_t;
	typedef ::kdm::core::String kind_t;

	
	type_t getType() const;
	void setKind(kind_t _kind);
	kind_t getKind() const;


	std::set < kdm::data::ComplexContentType_ptr > m_type;
	kind_t m_kind;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_SIMPLECONTENTTYPE__HPP
