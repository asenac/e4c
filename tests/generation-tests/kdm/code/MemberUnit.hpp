
#ifndef EMF_CPP_KDM_CODE_MEMBERUNIT__HPP
#define EMF_CPP_KDM_CODE_MEMBERUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DataElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::MemberUnit
class MemberUnit :  public virtual ::kdm::code::DataElement
{
public:

	typedef MemberUnit_ptr ptr_type;
	
	MemberUnit();
	virtual ~MemberUnit();

	typedef ::kdm::code::ExportKind export__t;

	
	void setExport_(export__t _export_);
	export__t getExport_() const;


	export__t m_export_;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_MEMBERUNIT__HPP
