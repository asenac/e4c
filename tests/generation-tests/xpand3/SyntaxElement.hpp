
#ifndef EMF_CPP_XPAND3_SYNTAXELEMENT__HPP
#define EMF_CPP_XPAND3_SYNTAXELEMENT__HPP

#include <xpand3/fwd.hpp>
#include <xpand3/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{


// xpand3::SyntaxElement
class SyntaxElement
{
public:

	typedef SyntaxElement_ptr ptr_type;
	
	virtual ~SyntaxElement();

	typedef int line_t;
	typedef int start_t;
	typedef int end_t;
	typedef int fileName_t;

	
	void setLine(line_t _line);
	line_t getLine() const;
	void setStart(start_t _start);
	start_t getStart() const;
	void setEnd(end_t _end);
	end_t getEnd() const;
	void setFileName(fileName_t _fileName);
	fileName_t getFileName() const;

	
protected:
	SyntaxElement();

	line_t m_line;
	start_t m_start;
	end_t m_end;
	fileName_t m_fileName;

};

} // xpand3


#endif // EMF_CPP_XPAND3_SYNTAXELEMENT__HPP
