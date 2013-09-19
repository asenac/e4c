
#ifndef EMF_CPP_ECORE_EGENERICTYPE__HPP
#define EMF_CPP_ECORE_EGENERICTYPE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


// ecore::EGenericType
class EGenericType
{
public:

	typedef EGenericType_ptr ptr_type;
	
	EGenericType();
	virtual ~EGenericType();

	typedef std::unique_ptr < ecore::EGenericType > eUpperBound_t;
	typedef boost::ptr_vector < ecore::EGenericType > eTypeArguments_t;
	typedef ecore::EClassifier_ptr eRawType_t;
	typedef std::unique_ptr < ecore::EGenericType > eLowerBound_t;
	typedef ecore::ETypeParameter_ptr eTypeParameter_t;
	typedef ecore::EClassifier_ptr eClassifier_t;

	
	// TODO
	// TODO
	// TODO
	// TODO
	// TODO
	// TODO

	
protected:

	eUpperBound_t m_eUpperBound;
	eTypeArguments_t m_eTypeArguments;
	eRawType_t m_eRawType;
	eLowerBound_t m_eLowerBound;
	eTypeParameter_t m_eTypeParameter;
	eClassifier_t m_eClassifier;

};

} // ecore


#endif // EMF_CPP_ECORE_EGENERICTYPE__HPP
