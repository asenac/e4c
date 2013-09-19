
#ifndef EMF_CPP_C_CFUNCTION__HPP
#define EMF_CPP_C_CFUNCTION__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/BehavioralFeature.hpp>

#include <e4c/mapping.hpp>

namespace C
{


// C::CFunction
class CFunction :  public virtual ::C::BehavioralFeature
{
public:

	typedef CFunction_ptr ptr_type;
	
	CFunction();
	virtual ~CFunction();

	typedef int isVarArg_t;

	
	void setIsVarArg(isVarArg_t _isVarArg);
	isVarArg_t getIsVarArg() const;

	
protected:

	isVarArg_t m_isVarArg;

};

} // C


#endif // EMF_CPP_C_CFUNCTION__HPP
