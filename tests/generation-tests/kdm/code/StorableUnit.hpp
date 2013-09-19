
#ifndef EMF_CPP_KDM_CODE_STORABLEUNIT__HPP
#define EMF_CPP_KDM_CODE_STORABLEUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DataElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::StorableUnit
class StorableUnit :  public virtual ::kdm::code::DataElement
{
public:

	typedef StorableUnit_ptr ptr_type;
	
	StorableUnit();
	virtual ~StorableUnit();

	typedef int kind_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;

	
protected:

	kind_t m_kind;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_STORABLEUNIT__HPP
