
#ifndef EMF_CPP_KDM_DATA_CHOICECONTENT__HPP
#define EMF_CPP_KDM_DATA_CHOICECONTENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ComplexContentType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class ChoiceContent :  public virtual ::kdm::data::ComplexContentType
{
public:

	typedef ChoiceContent_ptr ptr_type;
	
	ChoiceContent();
	virtual ~ChoiceContent();

	
	

	/*PROTECTED REGION ID(kdm::data::ChoiceContent public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DataPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::data::ChoiceContent protected) START*/
	/*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_CHOICECONTENT__HPP
