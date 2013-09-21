
#ifndef EMF_CPP_KDM_CODE_MODULE__HPP
#define EMF_CPP_KDM_CODE_MODULE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/CodeItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::Module
class Module :  public virtual ::kdm::code::CodeItem
{
public:

	typedef Module_ptr ptr_type;
	
	Module();
	virtual ~Module();

	typedef std::vector < kdm::code::AbstractCodeElement_ptr > codeElement_t;

	
	codeElement_t getCodeElement() const;


	std::vector < std::unique_ptr < kdm::code::AbstractCodeElement > > m_codeElement;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_MODULE__HPP
