
#ifndef EMF_CPP_ECORE_ETYPEDELEMENT__HPP
#define EMF_CPP_ECORE_ETYPEDELEMENT__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ENamedElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class ETypedElement :  public virtual ::ecore::ENamedElement
{
public:

	typedef ETypedElement_ptr ptr_type;
	
	virtual ~ETypedElement();

	typedef ::ecore::EBoolean ordered_t;
	typedef ::ecore::EBoolean unique_t;
	typedef ::ecore::EInt lowerBound_t;
	typedef ::ecore::EInt upperBound_t;
	typedef ::ecore::EBoolean many_t;
	typedef ::ecore::EBoolean required_t;
	typedef ecore::EClassifier_ptr eType_t;
	typedef ecore::EGenericType_ptr eGenericType_t;

	
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
	eType_t getEType() const;
	
	void setEType(eType_t eType_);
	eGenericType_t getEGenericType() const;
	void setEGenericType(eGenericType_t eGenericType_);
	eGenericType_t releaseEGenericType();

		
protected:
	ETypedElement();

	ordered_t m_ordered;
	unique_t m_unique;
	lowerBound_t m_lowerBound;
	upperBound_t m_upperBound;
	many_t m_many;
	required_t m_required;
	ecore::EClassifier_ptr m_eType;
	std::unique_ptr < ecore::EGenericType > m_eGenericType;

	
};

} // ecore


#endif // EMF_CPP_ECORE_ETYPEDELEMENT__HPP
