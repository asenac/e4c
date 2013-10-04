
#ifndef EMF_CPP_C_CSOURCETEXT__HPP
#define EMF_CPP_C_CSOURCETEXT__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CSourceText : ::ecore::EObject
{
public:

	typedef CSourceText_ptr ptr_type;
	
	CSourceText();
	virtual ~CSourceText();

	typedef ::PrimitiveTypes::String source_t;
	typedef ::PrimitiveTypes::String fileName_t;
	
	void setSource(source_t _source);
	source_t getSource() const;
	void setFileName(fileName_t _fileName);
	fileName_t getFileName() const;
	

	/*PROTECTED REGION ID(C::CSourceText public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	source_t m_source;
	fileName_t m_fileName;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CSourceText protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CSOURCETEXT__HPP
