#ifndef CASE_H
#define CASE_H

#include "Characterisable.h"

class VisitorCase;

class Case : public Characterisable {
public:
    virtual ~Case();

    const char getChar() const override {
        return m_type;
    }

    virtual const bool accept(VisitorCase const &) = 0;

protected:
    char m_type{};

private:
};

#endif // CASE_H
