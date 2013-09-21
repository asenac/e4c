
#include "CodeModel.hpp"
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::code;

CodeModel::CodeModel() : 
	m_codeElement()
{
}

CodeModel::~CodeModel()
{
}

CodeModel::codeElement_t CodeModel::getCodeElement() const
{
	return e4c::returned(m_codeElement);
}



