
#ifndef EMF_CPP_EMOF_MULTIPLICITYELEMENT__HPP
#define EMF_CPP_EMOF_MULTIPLICITYELEMENT__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


// emof::MultiplicityElement
class MultiplicityElement
{
public:

	typedef MultiplicityElement_ptr ptr_type;
	
	virtual ~MultiplicityElement();

	typedef int isOrdered_t;
	typedef int isUnique_t;
	typedef int lower_t;
	typedef int upper_t;

	
	void setIsOrdered(isOrdered_t _isOrdered);
	isOrdered_t getIsOrdered() const;
	void setIsUnique(isUnique_t _isUnique);
	isUnique_t getIsUnique() const;
	void setLower(lower_t _lower);
	lower_t getLower() const;
	void setUpper(upper_t _upper);
	upper_t getUpper() const;

	
protected:
	MultiplicityElement();

	isOrdered_t m_isOrdered;
	isUnique_t m_isUnique;
	lower_t m_lower;
	upper_t m_upper;

};

} // emof


#endif // EMF_CPP_EMOF_MULTIPLICITYELEMENT__HPP
