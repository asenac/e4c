
#ifndef EMF_CPP_ECORE_ETYPEDELEMENT__HPP
#define EMF_CPP_ECORE_ETYPEDELEMENT__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ENamedElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


// ecore::ETypedElement
class ETypedElement :  public virtual ::ecore::ENamedElement
{
public:

	typedef ETypedElement_ptr ptr_type;
	
	virtual ~ETypedElement();

	typedef int ordered_t;
	typedef int unique_t;
	typedef int lowerBound_t;
	typedef int upperBound_t;
	typedef int many_t;
	typedef int required_t;
	typedef ecore::EClassifier_ptr eType_t;
	typedef std::unique_ptr < ecore::EGenericType > eGenericType_t;

	
	void setOrdered(ordered_t _ordered);
	ordered_t getOrdered() const;
	void setUnique(unique_t _unique);
	unique_t getUnique() const;
	void setLowerBound(lowerBound_t _lowerBound);
	lowerBound_t getLowerBound() const;
	void setUpperBound(upperBound_t _upperBound);
	upperBound_t getUpperBound() const;
	void setMany(many_t _many);
	many_t getMany() const;
	void setRequired(required_t _required);
	required_t getRequired() const;
	// TODO
	// TODO

	
protected:
	ETypedElement();

	ordered_t m_ordered;
	unique_t m_unique;
	lowerBound_t m_lowerBound;
	upperBound_t m_upperBound;
	many_t m_many;
	required_t m_required;
	eType_t m_eType;
	eGenericType_t m_eGenericType;

};

} // ecore


#endif // EMF_CPP_ECORE_ETYPEDELEMENT__HPP
