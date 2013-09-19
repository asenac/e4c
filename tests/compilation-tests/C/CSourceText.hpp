
#ifndef EMF_CPP_C_CSOURCETEXT__HPP
#define EMF_CPP_C_CSOURCETEXT__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace C
{


// C::CSourceText
class CSourceText
{
public:

	typedef CSourceText_ptr ptr_type;
	
	CSourceText();
	virtual ~CSourceText();

	typedef int source_t;
	typedef int fileName_t;

	
	void setSource(source_t _source);
	source_t getSource() const;
	void setFileName(fileName_t _fileName);
	fileName_t getFileName() const;

	
protected:

	source_t m_source;
	fileName_t m_fileName;

};

} // C


#endif // EMF_CPP_C_CSOURCETEXT__HPP
