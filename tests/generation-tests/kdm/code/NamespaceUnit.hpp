
#ifndef EMF_CPP_KDM_CODE_NAMESPACEUNIT__HPP
#define EMF_CPP_KDM_CODE_NAMESPACEUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/CodeItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::NamespaceUnit
class NamespaceUnit :  public virtual ::kdm::code::CodeItem
{
public:

	typedef NamespaceUnit_ptr ptr_type;
	
	NamespaceUnit();
	virtual ~NamespaceUnit();

	typedef std::set < kdm::code::CodeItem_ptr > groupedCode_t;

	
	groupedCode_t getGroupedCode() const;


	std::set < kdm::code::CodeItem_ptr > m_groupedCode;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_NAMESPACEUNIT__HPP
