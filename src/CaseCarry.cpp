#include "CaseCarry.h"

CaseCarry::~CaseCarry() = default;

const char CaseCarry::getChar() const {
    if (m_content == nullptr)
        return m_content->getChar();
    return m_type;
}
