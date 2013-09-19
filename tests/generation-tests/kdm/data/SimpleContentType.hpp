
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

	typedef std::vector < kdm::data::ComplexContentType_ptr > type_t;
	typedef int kind_t;

	
	// TODO
	void setKind(kind_t _kind);
	kind_t getKind() const;

	
protected:

	type_t m_type;
	kind_t m_kind;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_SIMPLECONTENTTYPE__HPP
