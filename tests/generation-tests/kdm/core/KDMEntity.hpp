
#ifndef EMF_CPP_KDM_CORE_KDMENTITY__HPP
#define EMF_CPP_KDM_CORE_KDMENTITY__HPP

#include <kdm/core/fwd.hpp>
#include <kdm/core/meta.hpp>
#include <kdm/core/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace core
{


// kdm::core::KDMEntity
class KDMEntity :  public virtual ::kdm::core::ModelElement
{
public:

	typedef KDMEntity_ptr ptr_type;
	
	virtual ~KDMEntity();

	typedef int name_t;

	
	void setName(name_t _name);
	name_t getName() const;

	
protected:
	KDMEntity();

	name_t m_name;

};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_KDMENTITY__HPP
