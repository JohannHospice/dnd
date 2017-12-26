#ifndef CARRYCASE_H
#define CARRYCASE_H

#include "Case.h"
#include "Dynamic.h"

class CaseCarry : public Case {
public:
    ~CaseCarry() override;

    const char getChar() const override;

    Dynamic *getContent() const {
        return m_content;
    }

    void setContent(Dynamic *val) {
        m_content = val;
    }

    const bool hasContent() const {
        return m_content != nullptr;
    }

protected:

private:
    Dynamic *m_content = nullptr;
};

#endif // CARRYCASE_H
